/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 15:07:09 by jbadia            #+#    #+#             */
/*   Updated: 2021/05/09 15:08:07 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    if (*needle == 0)
        return ((char*) haystack);
    while((haystack[i] != '\0') && (i <= len))
    {
        while((haystack[i + j] == needle[j]) && (i + j <= len))
        {
            if (needle[j + 1] == '\0')
                return((char*)&haystack[i]);
            j++;
        }
        i++;
    }
    return(NULL);
}