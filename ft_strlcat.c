/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 14:56:18 by jbadia            #+#    #+#             */
/*   Updated: 2021/05/14 16:04:22 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

static size_t ft_strnlen(const char *str, size_t maxlen)
{
	size_t	len;

	len = ft_strlen(str);
	if (len < maxlen)
		return (len);
	else
		return (maxlen);
}

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	dstlen;

	srclen = ft_strlen(src);
	dstlen = ft_strnlen(dest, dstsize);
	if (dstlen == dstsize)
		return (dstsize + srclen);
	if (srclen < dstsize - dstlen)
		ft_memcpy(dest + dstlen, src, srclen + 1);
	else
	{
		ft_memcpy(dest + dstlen, src, dstsize - dstlen - 1);
		dest[dstsize - 1] = '\0';
	}
	return (dstlen + srclen);

}

int main(void)
{
	  char dest[30] = "SALUTATIONS";
	  char src[] = "toto";
	  printf("C  : %zu\n\n", strlcat(dest, src, 23));
	  printf("FT : %zu\n", ft_strlcat(dest, src, 23));
	  
}