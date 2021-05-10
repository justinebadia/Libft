/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 17:37:56 by jbadia            #+#    #+#             */
/*   Updated: 2021/05/08 17:43:04 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *str;
    size_t i;

    str = NULL;
    if(*s == 0)
        return (0);
    str = (char *)malloc(sizeof(char) * (len + 1));
    if (str == NULL)
        return(NULL);
    i = 0;
    while (i < len)
    {
        str[i] = s[start];
        i++;
        start++;
    }
    str[i] = '\0';
    return(str);
}