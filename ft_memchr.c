/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 17:07:43 by jbadia            #+#    #+#             */
/*   Updated: 2021/05/10 14:24:28 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*str;
	size_t		i;

	str = (const char *)s;
	i = 0;
	while ((str[i] != '\0') && (i < n))
	{
		if (str[i] == c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}
