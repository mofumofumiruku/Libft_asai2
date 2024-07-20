/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasai <tasai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 21:12:20 by tasai             #+#    #+#             */
/*   Updated: 2024/07/14 22:35:50 by tasai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (*s1 && *s2 && *s1 == *s2 && n > 1)
	{
		s1++;
		s2++;
		n--;
	}
	return ((unsigned char)(*s1) - (unsigned char)(*s2));
}

// int	main(void)
// {
// 	char	*s1;
// 	char	*s2;
// 	size_t	n;

// 	s1 = "abcdefg";
// 	s2 = "accdefg";
// 	n = 2;
// 	printf("%d\n", strncmp(s1, s2, n));
// 	printf("%d\n", ft_strncmp(s1, s2, n));
// 	return (0);
// }
