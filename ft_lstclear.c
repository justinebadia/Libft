/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 17:22:51 by jbadia            #+#    #+#             */
/*   Updated: 2021/05/11 17:23:03 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *clear;

    if(lst == 0 || del == 0)
        return ;
    while(lst != 0)
    {
        clear = (*lst)->next;
        ft_lstdelone(lst, del);
        *lst = clear;
    }
    *lst = NULL;
}