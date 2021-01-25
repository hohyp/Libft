/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hohypark <hohypark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 04:40:39 by hohypark          #+#    #+#             */
/*   Updated: 2021/01/18 04:40:39 by hohypark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(void *src, int c, unsigned int size)
{
	char *tmp;

	tmp = (char *)src;
	while (size--)
	{
		if (*tmp == c)
			return ((void *)tmp);
		tmp++;
	}
	return (0);
}
