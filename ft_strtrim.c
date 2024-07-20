/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasai <tasai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 21:12:24 by tasai             #+#    #+#             */
/*   Updated: 2024/07/14 21:15:11 by tasai            ###   ########.fr       */
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

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ans;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	ans = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!ans)
		return (NULL);
	ft_strlcpy(ans, &s1[start], end - start + 1);
	return (ans);
}

// int main(void)
// {
//     printf("%s\n", ft_strtrim(" a b c d efg h     i"," "));
//     return (0);
// }