/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hohypark <hohypark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 04:41:22 by hohypark          #+#    #+#             */
/*   Updated: 2021/01/30 21:24:25 by hohypark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		get_digit(int n)
{
	int	count;

	if (n == 0)
		return (1);
	else
	{
		count = n < 0 ? 1 : 0;
		while (n)
		{
			count++;
			n /= 10;
		}
	}
	return (count);
}

static char	*ft_putnum(char *str, int n, int i)
{
	int	tmp;

	if (n == -2147483648)
	{
		str[i--] = '8';
		n /= 10;
	}
	tmp = n < 0 ? -n : n;
	while (i >= 0)
	{
		str[i--] = (tmp % 10) + 48;
		tmp /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;

	len = get_digit(n);
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	str[len] = '\0';
	if (n == 0)
	{
		*str = '0';
		return (str);
	}
	str = ft_putnum(str, n, len - 1);
	if (n < 0 && len > 1)
		str[0] = '-';
	return (str);
}
