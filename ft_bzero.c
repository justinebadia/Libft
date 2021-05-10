/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 16:33:02 by jbadia            #+#    #+#             */
/*   Updated: 2021/05/08 16:33:45 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    unsigned char *str;
    size_t i;

    str = (unsigned char*)s;
    i = 0;
    // if (n == 0)
    //     return ;
    while (i < n)
    {
        str[i] = 0;
        i++;
    }
    s = str;
}