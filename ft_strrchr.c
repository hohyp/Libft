/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hohypark <hohypark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 04:40:13 by hohypark          #+#    #+#             */
/*   Updated: 2021/01/18 04:40:14 by hohypark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int c)
{
	char	*str_tmp;
	int		len;

	str_tmp = str;
	len = ft_strlen(str);
	while (len--)
		str_tmp++;
	while (str_tmp != str - 1)
	{
		if (*str_tmp == c)
			return (str_tmp);
		str_tmp--;
	}
	return (0);
}
