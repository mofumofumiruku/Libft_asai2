/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasai <tasai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 21:12:11 by tasai             #+#    #+#             */
/*   Updated: 2024/07/14 21:12:12 by tasai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t	ft_strlen(const char *s);
// {
// 	size_t	i;

// 	i = 0;
// 	while (s[i] != '\0')
// 	{
// 		i++;
// 	}
// 	return (i);
// }

char	*ft_strdup(const char *src)
{
	char	*ans;
	int		i;
	int		size;

	size = ft_strlen(src);
	ans = malloc(sizeof(char) * (size + 1));
	if (!ans)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		ans[i] = src[i];
		i++;
	}
	ans[i] = '\0';
	return (ans);
}

// int main(void)
// {
//     char *src = "Hello World";
//     printf("%s\n", ft_strdup(src));

//     printf("%s\n", strdup(src));
//     return (0);
// }
