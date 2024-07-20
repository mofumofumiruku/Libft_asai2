/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasai <tasai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 21:09:28 by tasai             #+#    #+#             */
/*   Updated: 2024/07/14 22:46:21 by tasai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t size)
{
	size_t			i;
	unsigned char	*source;
	unsigned char	*desti;
	unsigned char	ch;

	i = 0;
	source = (unsigned char *)src;
	desti = (unsigned char *)dest;
	ch = (unsigned char)c;
	while (i < size)
	{
		desti[i] = source[i];
		if (source[i] == ch)
			return (desti + i + 1);
		i++;
	}
	return (NULL);
}
