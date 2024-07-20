/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasai <tasai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 21:12:05 by tasai             #+#    #+#             */
/*   Updated: 2024/07/14 21:12:06 by tasai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	len;

	len = 0;
	if (!s)
		return ;
	while (s[len] != '\0')
	{
		len++;
	}
	write(fd, s, len);
	write(fd, "\n", 1);
}

// int	main(void)
// {
// 	char *str = "Hello, World!\n";

// 	ft_putendl_fd(str, STDOUT_FILENO); // Equivalent to fd = 1
// 	ft_putendl_fd(str, STDERR_FILENO); // Equivalent to fd = 2

// 	return (0);
// }