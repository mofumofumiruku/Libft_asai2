/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasai <tasai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 21:09:03 by tasai             #+#    #+#             */
/*   Updated: 2024/07/15 16:49:15 by tasai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_overflow(unsigned long nbr, int sign)
{
	if (nbr > 9223372036854775807 / 10)
		return (1);
	if (nbr == 9223372036854775807 / 10)
	{
		if (sign == 1 && (nbr % 10 > 7))
			return (1);
		if (sign == -1 && (nbr % 10 > 8))
			return (1);
	}
	return (0);
}

static const char	*trim_whitespace(const char *str)
{
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r')
		str++;
	return (str);
}

static long long int	convert_str_to_num(const char *str, int sign)
{
	unsigned long	n;

	n = 0;
	while (*str >= '0' && *str <= '9')
	{
		if (check_overflow(n, sign))
		{
			if (sign == 1)
				return (-1);
			else
				return (0);
		}
		n = n * 10 + (*str - '0');
		str++;
	}
	return ((long long int)(n * sign));
}

int	ft_atoi(const char *str)
{
	int	sign;

	str = trim_whitespace(str);
	sign = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	return ((int)convert_str_to_num(str, sign));
}

// int main(void)
// {
//     char *str1 = "-2";
//     char *str2 = "    --10";
//     char *str3 = "123  1 -";
//     char *str4 = "\n - 12 3";
//     char *str5 = "9223372036854775806";

//     printf("%d\n", ft_atoi(str1));
//     printf("%d\n", ft_atoi(str2));
//     printf("%d\n", ft_atoi(str3));
//     printf("%d\n", ft_atoi(str4));
//     printf("%d\n\n", ft_atoi(str5));

//     printf("%d\n", atoi(str1));
//     printf("%d\n", atoi(str2));
//     printf("%d\n", atoi(str3));
//     printf("%d\n", atoi(str4));
//     printf("%d\n", atoi(str5));
//     return (0);
// }
