/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasai <tasai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 21:10:37 by tasai             #+#    #+#             */
/*   Updated: 2024/07/14 23:06:59 by tasai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	move_backward(char *dst, const char *src, size_t len)
{
	while (len > 0)
	{
		len--;
		dst[len] = src[len];
	}
}

static void	move_forward(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		dst[i] = src[i];
		i++;
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;

	if (dst == NULL && src == NULL)
		return (NULL);
	d = (char *)dst;
	s = (const char *)src;
	if (len == 0 || d == s)
		return (dst);
	if (d > s)
		move_backward(d, s, len);
	else
		move_forward(d, s, len);
	return (dst);
}

// int main() {
//     char str[] = "Hello, World!";
//     memmove(str + 7, str, 6);
//     printf("%s\n", str); // "Hello, Hello!"
//     return (0);
// }