/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 16:01:05 by jbadia            #+#    #+#             */
/*   Updated: 2021/05/10 14:50:44 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char const	*ft_skip_c (char const *s, char c)
{
	while (*s != '\0' && *s == c)
		s++;
	return (s);
}

static char const	*ft_go_toc(char const *s, char c)
{
	while (*s != '\0' && *s != c)
		s++;
	return (s);
}

static int	word_length(char const *s, char c)
{
	int	length;

	length = 0;
	while (*s && *s != c)
	{
		length++,
		s++;
	}
	return (length);
}

static char	*ft_copyword(char const *s, char c)
{
	char	*str;
	int		length;

	length = word_length(s, c);
	str = ft_substr(s, 0, length);
	if (str == 0)
		return (NULL);
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int		words;
	char	**split;
	int		i;

	words = ft_countwords(s, c);
	split = (char **)malloc(sizeof(char *) * (words + 1));
	if (split == NULL)
		return (NULL);
	i = 0;
	while (i < words)
	{
		s = ft_skip_c (s, c);
		split[i] = ft_copyword(s, c);
		s = ft_go_toc(s, c);
		i++;
	}
	split[i] = NULL;
	return (split);
}
