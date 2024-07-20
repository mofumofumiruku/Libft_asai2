/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasai <tasai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 21:12:02 by tasai             #+#    #+#             */
/*   Updated: 2024/07/14 21:12:03 by tasai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
// int	main(void)
// {
// 	char c = 'k';

// 	ft_putchar_fd(c, STDOUT_FILENO); // Equivalent to fd = 1
// 	ft_putchar_fd(c, STDERR_FILENO); // Equivalent to fd = 2

// 	return (0);
// }