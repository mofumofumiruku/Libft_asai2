/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasai <tasai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 21:09:21 by tasai             #+#    #+#             */
/*   Updated: 2024/07/14 21:10:08 by tasai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

// int main(void)
// {
//     int c1 = 'A';
//     int c2 = '\n';
//     int c3 ='NULL';

//     printf("%d\n", ft_isprint(c1));

//     printf("%d\n", ft_isprint(c2));

//     printf("%d\n", ft_isprint(c3));

//     printf("%d\n", isprint(c1));

//     printf("%d\n", isprint(c2));

//     printf("%d\n", isprint(c3));

//     return (0);
// }