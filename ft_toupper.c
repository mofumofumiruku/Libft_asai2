/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasai <tasai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 21:12:27 by tasai             #+#    #+#             */
/*   Updated: 2024/07/14 21:12:28 by tasai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if ((c >= 'a' && c <= 'z'))
		return (c - 32);
	else
		return (c);
}

// int	main(void)
// {
// 	int c = 106;

// 	printf("ft_toupper = %c\n", ft_toupper(c));
// 	printf("toupper = %c\n", toupper(c));

// 	return (0);
// }