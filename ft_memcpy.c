/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hohypark <hohypark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 04:40:57 by hohypark          #+#    #+#             */
/*   Updated: 2021/01/18 04:40:57 by hohypark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char *tmp;
    const unsigned char *s;

    if (!dst && !src)
        return (0);
    tmp = (unsigned char *)dst;
    s = (unsigned char *)src;
    while (n--)
    {
        *tmp++ = *s++;
    }
    return (dst);
}
