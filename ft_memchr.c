/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasai <tasai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 21:10:20 by tasai             #+#    #+#             */
/*   Updated: 2024/07/14 21:10:21 by tasai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s2;
	unsigned char	c2;
	size_t			i;

	s2 = (unsigned char *)s;
	c2 = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*s2 == c2)
		{
			return (s2);
		}
		s2++;
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char	*s1;
// 	int			c;
// 	size_t		n;
// 	char		*p;
// 	char		*p2;

// 	s1 = "hello";
// 	c = 'a';
// 	n = 10;
// 	p = memchr(s1, c, n);
// 	printf("%s\n", p);
// 	p2 = ft_memchr(s1, c, n);
// 	printf("%s\n", p2);
// 	return (0);
// }
