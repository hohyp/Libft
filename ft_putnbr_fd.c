/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hohypark <hohypark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 04:41:59 by hohypark          #+#    #+#             */
/*   Updated: 2021/01/18 04:41:59 by hohypark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long nb[2];

	nb[0] = (long)n;
	if (fd < 0)
		return ;
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (nb[0] < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-nb[0], fd);
	}
	if (nb[0] > 9)
	{
		nb[1] = (nb[0] % 10) + '0';
		ft_putnbr_fd((nb[0] / 10), fd);
		ft_putchar_fd(nb[1], fd);
	}
	if (nb[0] >= 0 && nb[0] <= 9)
		ft_putchar_fd((nb[0] + '0'), fd);
}
