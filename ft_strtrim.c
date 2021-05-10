/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 17:48:51 by jbadia            #+#    #+#             */
/*   Updated: 2021/05/09 16:16:28 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int c_in_str (char const *str, char c)
{
    int i;
    i = 0;
    
    while(str[i] != '\0')
    {
        if(str[i] == c)
            return(0);
        i++;
    }
    return(1);
}

char *ft_strtrim(char const *s1, char const *set)
{
    char *str;
    size_t end;
    size_t start;

    if(s1 == 0)
        return (NULL);
    if (set == 0)
        return (ft_strdup(s1));
    end = ft_strlen(s1);
    start = 0;
    while(c_in_str(set, s1[start]) == 0)
        start++;
    
    while(c_in_str(set, s1[end - 1]) == 0)
        end--;
    
    str = ft_substr(s1, start, end - start);
    return (str); 
}