/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasai <tasai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 21:10:23 by tasai             #+#    #+#             */
/*   Updated: 2024/07/14 21:10:26 by tasai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s3;
	const unsigned char	*s4;
	size_t				i;

	s3 = (const unsigned char *)s1;
	s4 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (s3[i] != s4[i])
		{
			return (s3[i] - s4[i]);
		}
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	const char	*s1;
// 	const char	*s2;
// 	size_t		n;

// 	s1 = "AAllo world";
// 	s2 = "CCAAA borld";
// 	n = 2;
// 	printf("ftmemcmp -> %d\n", ft_memcmp(s1, s2, n));
// 	printf("memcmp -> %d\n", memcmp(s1, s2, n));
// 	return (0);
// }
