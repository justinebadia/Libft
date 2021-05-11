/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 17:23:36 by jbadia            #+#    #+#             */
/*   Updated: 2021/05/11 17:23:37 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *new_list;
    t_list  *temp;

    if (lst == NULL || f == NULL || del == NULL)
        return (0);
    new_list = ft_lstnew((*f)(lst->content));
    temp = new_list;
    while(lst != 0)
    {
        new_list->next = ft_lstnew((*f)(lst->content));
        if (new_list->next == NULL)
        {
            
        }
        new_list = new_list->next;
        lst = lst->next;
    }
    new_list->next = NULL;
    return (temp);