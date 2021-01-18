/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hohypark <hohypark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 03:50:47 by hohypark          #+#    #+#             */
/*   Updated: 2021/01/18 04:42:17 by hohypark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	result;
	unsigned int	d_len;
	unsigned int	s_len;

	i = 0;
	d_len = ft_strlen(dest);
	s_len = ft_strlen(src);
	j = d_len;
	if (size > d_len)
	{
		if (!(d_len == size - 1))
		{
			while (src[i] && i < size - d_len - 1)
				dest[j++] = src[i++];
			dest[j] = '\0';
		}
		result = s_len + j - i;
	}
	else
		result = s_len + size;
	return (result);
}
