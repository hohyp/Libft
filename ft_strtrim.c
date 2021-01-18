/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hohypark <hohypark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 04:42:30 by hohypark          #+#    #+#             */
/*   Updated: 2021/01/18 04:42:30 by hohypark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_isset(const char *set, int c)
{
	while (*set)
		if (c == *set++)
			return (1);
	return (0);
}

char			*ft_strtrim(const char *str, const char *set)
{
	size_t	start;
	size_t	end;

	if (!str || !set)
		return (0);
	start = 0;
	end = ft_strlen(str);
	while (ft_isset(set, str[start]) && str[start] != '\0')
		start++;
	while (ft_isset(set, str[end - 1]) && end > start)
		end--;
	return (ft_substr(str, start, end - start));
}
