/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hohypark <hohypark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 04:41:38 by hohypark          #+#    #+#             */
/*   Updated: 2021/01/30 21:21:26 by hohypark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(unsigned int n, unsigned int size)
{
	void *tmp;

	if (!(tmp = malloc(n * size)))
		return (0);
	ft_memset(tmp, 0, n * size);
	return (tmp);
}
