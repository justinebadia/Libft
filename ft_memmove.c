/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 17:01:37 by jbadia            #+#    #+#             */
/*   Updated: 2021/05/10 14:35:50 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t	i;
	char	*p_dest;
	char	*p_src;

	p_dest = (char *)dest;
	p_src = (char *)src;
	i = 0;
	if (dest == src)
		return (dest);
	if (p_dest > p_src)
	{
		while (i < len)
		{
			p_dest[len - 1] = p_src[len - 1];
			len--;
		}
	}
	else
	{
		while (i++ < len)
			p_dest[i] = p_src[i];
	}
	return (dest);
}
