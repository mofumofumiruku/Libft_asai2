/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasai <tasai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 21:12:23 by tasai             #+#    #+#             */
/*   Updated: 2024/07/14 21:12:24 by tasai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char const	*s2;

	s2 = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
			s2 = s;
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	else
		return ((char *)s2);
}

// int	main(void)
// {
// 	char	*s;
// 	// int		c;

// 	s = "bbbaaaaccadcaj";
// 	// c = 'h';
// 	printf("%s\n", ft_strrchr(s, s[5]));
// 	printf("%s\n", strrchr(s, s[6]));
// 	return (0);
// }
