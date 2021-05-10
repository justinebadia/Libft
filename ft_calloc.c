/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 17:25:34 by jbadia            #+#    #+#             */
/*   Updated: 2021/05/08 17:34:49 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    void *memory;
    
    memory = NULL;
    memory = (void *)malloc(count * size);
    if (memory == NULL)
        return(NULL);
    ft_bzero(memory, count);
    return(memory);
}