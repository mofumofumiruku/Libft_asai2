/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasai <tasai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 21:12:08 by tasai             #+#    #+#             */
/*   Updated: 2024/07/20 19:26:24 by tasai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countword(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (s && *s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

static void	free_split(char **lst, int i)
{
	while (i--)
		free(lst[i]);
	free(lst);
}

static char	*alloc_word(char const **s, char c)
{
	size_t		word_len;
	const char	*start = *s;

	word_len = 0;
	while (**s && **s != c)
	{
		(*s)++;
		word_len++;
	}
	return (ft_substr(start, 0, word_len));
}

char	**ft_split(char const *s, char c)
{
	char	**lst;
	int		i;
	int		words;

	i = 0;
	words = ft_countword(s, c);
	lst = (char **)malloc((words + 1) * sizeof(char *));
	if (!lst)
		return (NULL);
	while (s && *s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			lst[i] = alloc_word(&s, c);
			if (!lst[i++])
				return (free_split(lst, i - 1), NULL);
		}
	}
	return (lst[i] = NULL, lst);
}
