/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hohypark <hohypark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 21:32:07 by hohypark          #+#    #+#             */
/*   Updated: 2021/01/29 00:25:59 by hohypark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_row(const char *str, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	if (str[i] == 0)
		return (0);
	while (str[i])
	{
		if (str[i] == c && str[i + 1] != c)
			count++;
		i++;
	}
	if (str[i - 1] == c)
		count--;
	return (++count);
}

char	*ft_col(const char *str, char c, int *i)
{
	char	*s;
	int		j;

	if (!(s = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1))))
		return (0);
	j = 0;
	while (str[*i] != c && str[*i])
	{
		s[j] = str[*i];
		j++;
		*i += 1;
	}
	s[j] = 0;
	while (str[*i] == c && str[*i])
		*i += 1;
	return (s);
}

void	ft_free(char **result)
{
	int i;

	i = 0;
	while (result[i] != 0)
		free(result[i++]);
	free(result);
}

char	**ft_split(const char *str, char c)
{
	int		i;
	int		j;
	int		rlen;
	char	**result;

	i = 0;
	j = 0;
	if (!str)
		return (0);
	while (str[i] == c && str[i])
		i++;
	rlen = ft_row(&str[i], c);
	if (!(result = (char **)malloc(sizeof(char *) * (rlen + 1))))
		return (0);
	while (j < rlen && str[i])
	{
		result[j] = ft_col(str, c, &i);
		if (result[j++] == 0)
		{
			ft_free(result);
			return (0);
		}
	}
	result[j] = NULL;
	return (result);
}
