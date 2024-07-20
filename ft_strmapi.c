/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasai <tasai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 21:12:18 by tasai             #+#    #+#             */
/*   Updated: 2024/07/14 21:12:19 by tasai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);
// {
// 	size_t	i;

// 	i = 0;
// 	while (s[i] != '\0')
// 	{
// 		i++;
// 	}
// 	return (i);
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			len;
	unsigned int	i;
	char			*result;

	if (s == NULL || f == NULL)
	{
		return (NULL);
	}
	len = ft_strlen(s);
	i = 0;
	result = (char *)malloc(len + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	while (i < len)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[len] = '\0';
	return (result);
}

char	test_f(unsigned int index, char c)
{
	return (c - 32 + index);
}

// int main(void)
// {
//     char str[10] = "hello!!";

//     char *result = ft_strmapi(str,test_f);
//     printf("The result is %s\n", result);
// }