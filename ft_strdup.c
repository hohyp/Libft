/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hohypark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 00:59:32 by hohypark          #+#    #+#             */
/*   Updated: 2020/12/06 16:28:18 by hohypark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *str)
{
	char	*cpy_str;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(str);
	if (!(cpy_str = (char *)malloc(sizeof(char) * len + 1)))
		return (0);
	while (i < len)
	{
		cpy_str[i] = str[i];
		i++;
	}
	cpy_str[i] = '\0';
	return (cpy_str);
}
