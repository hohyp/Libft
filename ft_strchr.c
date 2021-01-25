/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hohypark <hohypark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 04:40:47 by hohypark          #+#    #+#             */
/*   Updated: 2021/01/18 04:40:48 by hohypark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *str, int c)
{
	char	*str_tmp;
	int		len;

	str_tmp = str;
	len = ft_strlen(str) + 1;
	while (len--)
	{
		if (*str_tmp == c)
			return (str_tmp);
		str_tmp++;
	}
	return (0);
}
