/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasai <tasai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 21:12:06 by tasai             #+#    #+#             */
/*   Updated: 2024/07/14 21:42:08 by tasai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_put_unsigned_nbr_fd(unsigned int num, int fd)
{
	char	buffer[12];
	int		i;

	i = 0;
	if (num == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	while (num > 0)
	{
		buffer[i++] = (num % 10) + '0';
		num /= 10;
	}
	while (i > 0)
		write(fd, &buffer[--i], 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	num;

	if (n < 0)
	{
		write(fd, "-", 1);
		num = -n;
	}
	else
	{
		num = n;
	}
	ft_put_unsigned_nbr_fd(num, fd);
}

// int main(void) {
//     int num1 = 12345;
//     int num2 = -67890;
//     int num3 = 0;

//     // Write to standard output
//     ft_putnbr_fd(num1, STDOUT_FILENO);
//     write(STDOUT_FILENO, "\n", 1);  // Newline for clarity
//     ft_putnbr_fd(num2, STDOUT_FILENO);
//     write(STDOUT_FILENO, "\n", 1);
//     ft_putnbr_fd(num3, STDOUT_FILENO);
//     write(STDOUT_FILENO, "\n", 1);

//     return (0);
// }
