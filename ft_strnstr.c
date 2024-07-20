/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasai <tasai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 21:12:21 by tasai             #+#    #+#             */
/*   Updated: 2024/07/14 21:22:29 by tasai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t len)
{
	size_t	i;
	size_t	j;

	if (str2[0] == '\0')
		return ((char *)str1);
	i = 0;
	while (i < len && str1[i] != '\0')
	{
		j = 0;
		while (i + j < len && str1[i + j] == str2[j])
		{
			j++;
			if (str2[j] == '\0')
				return ((char *)&str1[i]);
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char *s1 = "abcdefg";
// 	const char *s2 = "cde";
// 	size_t len = 5;

// 	printf("strnstr -> %s\n", strnstr(s1, s2, len));
// 	printf("ft_strnstr -> %s\n", ft_strnstr(s1, s2, len));

// 	const char *s3 = "abcdefg";
// 	const char *s4 = "";
// 	size_t len2 = 5;
// 	printf("strnstr -> %s\n", strnstr(s3, s4, len2));
// Expect: "abcdefg"
// 	printf("ft_strnstr -> %s\n", ft_strnstr(s3, s4, len2));
// Expect: "abcdefg"

// 	const char *s5 = "abcdefg";
// 	const char *s6 = "f";
// 	size_t len3 = 4;
// 	printf("strnstr -> %s\n", strnstr(s5, s6, len3));
// Expect: (null)
// 	printf("ft_strnstr -> %s\n", ft_strnstr(s5, s6, len3));
// Expect: (null)

// 	return (0);
// }