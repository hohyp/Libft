/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hohypark <hohypark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 04:40:18 by hohypark          #+#    #+#             */
/*   Updated: 2021/01/18 04:40:19 by hohypark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(char *haystack, char *needle, unsigned int len)
{
    size_t i;
    size_t nlen;
    size_t hlen;

    nlen = ft_strlen(needle);
    hlen = ft_strlen(haystack);
    if (nlen == 0)
        return (haystack);
    if (len < nlen || len < nlen)
		return (0);
	i = hlen > len ? len : hlen;
	while (i-- >= nlen)
	{
		if (ft_memcmp(haystack, needle, nlen) == 0)
			return (haystack);
		haystack++;
	}
    return (0);
}
