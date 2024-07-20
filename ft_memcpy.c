/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasai <tasai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 21:10:29 by tasai             #+#    #+#             */
/*   Updated: 2024/07/14 21:10:30 by tasai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst && !src)
		return (0);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

// int	main(void)
// {
// 	char		s1[100];
// 	const char	*s2;
// 	size_t		n;
// 	int			i;

// 	s2 = "source script";
// 	n = 10;
// 	memcpy(s1, s2, n);
// 	ft_memcpy(s1, s2, n);
// 	i = 0;
// 	printf("ft_memcpy\n");
// 	while (i < n)
// 	{
// 		printf("%c\n", s1[i]);
// 		i++;
// 	}
// 	i = 0;
// 	printf("memcpy\n");
// 	while (i < n)
// 	{
// 		printf("%c\n", s1[i]);
// 		i++;
// 	}
// 	return (0);
// }
