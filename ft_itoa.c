/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasai <tasai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 21:09:24 by tasai             #+#    #+#             */
/*   Updated: 2024/07/15 16:43:39 by tasai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_digits(long num)
{
	int	digits_len;

	if (num == 0)
		return (1);
	digits_len = 0;
	if (num < 0)
	{
		digits_len += 1;
		num *= -1;
	}
	while (num > 0)
	{
		num /= 10;
		digits_len++;
	}
	return (digits_len);
}

char	*ft_itoa(int n)
{
	char	*ans;
	size_t	digits;
	long	num;

	num = n;
	digits = get_digits(num);
	ans = (char *)malloc(sizeof(char) * (digits + 1));
	if (!ans)
		return (NULL);
	ans[digits] = '\0';
	if (num < 0)
	{
		ans[0] = '-';
		num = -num;
	}
	while (digits-- > (n < 0))
	{
		ans[digits] = (num % 10) + '0';
		num /= 10;
	}
	return (ans);
}

// int main(void)
// {
//     int n = 2147483647;
//     printf("%s\n", ft_itoa(n));

//     return (0);
// }
