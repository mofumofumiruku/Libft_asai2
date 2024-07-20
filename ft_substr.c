/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasai <tasai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 21:12:25 by tasai             #+#    #+#             */
/*   Updated: 2024/07/15 17:15:17 by tasai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);
// {
// 	size_t	i;

// 	i = 0;
// 	while (s[i] != '\0')
// 	{
// 		i++;
// 	}
// 	return (i);
// }

size_t	ft_strlcpy(char *dest, const char *src, size_t size);
// {
// 	size_t	count;

// 	count = 0;
// 	if (size == 0)
// 	{
// 		return (ft_strlen(src));
// 	}
// 	while (src[count] != '\0' && count < (size - 1))
// 	{
// 		dest[count] = src[count];
// 		count++;
// 	}
// 	dest[count] = '\0';
// 	return (ft_strlen(src));
// }

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ans;
	size_t	s_len;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	ans = (char *)malloc(sizeof(char) * (len + 1));
	if (ans == NULL)
		return (NULL);
	ft_strlcpy(ans, s + start, len + 1);
	return (ans);
}

// int	main(void)
// {
//     const char *s = "abcdefgh";
//     unsigned int start = 4;
//     size_t len = 10;
//     printf("%s\n",ft_substr(s, start, len));
// return (0);
// }