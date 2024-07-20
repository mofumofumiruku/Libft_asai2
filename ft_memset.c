/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasai <tasai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 21:10:41 by tasai             #+#    #+#             */
/*   Updated: 2024/07/14 21:10:42 by tasai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)b;
	while (i < len)
	{
		ptr[i++] = (unsigned char)c;
	}
	return (b);
}

// int	main(void)
// {
// 	int		i;
// 	size_t	len;
// 	char	a[6];
// 	int		tmp;

// 	i = 4;
// 	len = 6;
// 	tmp = 0;
// 	ft_memset(a, i, len);
// 	memset(a, i, len);
// 	printf("ft_memset\n");
// 	while (tmp < len)
// 	{
// 		printf("a = %d\n", a[tmp]);
// 		tmp++;
// 	}
// 	tmp = 0;
// 	printf("memset\n");
// 	while (tmp < len)
// 	{
// 		printf("a = %d\n", a[tmp]);
// 		tmp++;
// 	}
// 	return (0);
// }
