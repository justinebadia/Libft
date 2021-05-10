/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 14:56:18 by jbadia            #+#    #+#             */
/*   Updated: 2021/05/09 14:58:29 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat (char *dest, const char *src, size_t size)
{
    unsigned int len_dest;
    unsigned int dest_size;
    char *d;
    const char *s;

    d = dest;
    s = src;
   dest_size = size;
    while(dest_size != 0 && *d != '\0')
    {
		d++;
        dest_size--;
    }
    len_dest = d - dest;
    dest_size = size - len_dest;
    if (dest_size == 0)
        return (len_dest + ft_strlen(src));
    while(*s != '\0')
    {
        if( dest_size != 1)
        {
            *d = *s;
            d++;
            dest_size --;
        }
        s++;
    }
    *d = '\0';
    return (len_dest + (s - src));
}

    
