/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hohypark <hohypark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 04:40:34 by hohypark          #+#    #+#             */
/*   Updated: 2021/01/18 04:40:35 by hohypark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memccpy(void * dst, const void *src, int c, size_t n)
{
    unsigned char *dtmp;
    const unsigned char *stmp;

    dtmp = (unsigned char *)dst;
    stmp = (unsigned char *)src;
    if (!dst && !src)
        return (0);
    while (n--)
    {
        *dtmp = *stmp;
        if (*stmp == (unsigned char)c)
            return (++dtmp);
        dtmp++;
        stmp++;
    }
    return (0);
}
