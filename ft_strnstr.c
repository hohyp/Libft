/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hohypark <hohypark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 04:40:18 by hohypark          #+#    #+#             */
/*   Updated: 2021/02/01 00:05:28 by hohypark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, unsigned int len)
{
	size_t i;
	size_t nlen;
	size_t hlen;
	char	*h;
	char	*n;

	h = (char*)haystack;
	n = (char*)needle;
	nlen = ft_strlen(n);
	hlen = ft_strlen(h);
	if (nlen == 0)
		return (h);
	if (len < nlen)
		return (0);
	i = hlen > len ? len : hlen;
	while (i-- >= nlen)
	{
		if (ft_memcmp(h, n, nlen) == 0)
			return (h);
		h++;
	}
	return (0);
}
