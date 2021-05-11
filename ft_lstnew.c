/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 17:24:56 by jbadia            #+#    #+#             */
/*   Updated: 2021/05/11 17:24:58 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstnew(void *content)
{
    t_list  *new;

    new = NULL;
    new = (t_list *)malloc(sizeof(*new));
    if (new == NULL)
        return(NULL);
    new->content = (void *)content;
    new->next = NULL;
    return (new);
}