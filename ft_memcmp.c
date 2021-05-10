/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 17:11:22 by jbadia            #+#    #+#             */
/*   Updated: 2021/05/08 17:15:27 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp (const void *s1, const void *s2, size_t n)
{
    const unsigned char *str1;
    const unsigned char *str2;

    str1 = (const unsigned char *)s1;
    str2 = (const unsigned char *)s2;
    
    if (n == 0)
        return (0);
    while((*str1 == *str2) && (n != 0))
    {
        if(*str1 == '\0' && *str2 == '\0')
            return (0);
        str1++;
        str2++;
        n--; 
    }
    return ((int)*str1 - *str2);
}