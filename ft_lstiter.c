/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 17:23:07 by jbadia            #+#    #+#             */
/*   Updated: 2021/05/11 17:23:08 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    lstiter(t_list *lst, void(*f)(void *))
{
    t_list *iter;

    if(lst == 0 || f == 0)
        return ;
    while(lst != 0)
    {
        (*f)(lst->content);
        lst = lst->next;
    }
}