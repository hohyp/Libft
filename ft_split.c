/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hohypark <hohypark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 21:32:07 by hohypark          #+#    #+#             */
/*   Updated: 2021/01/24 21:38:15 by hohypark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_count_words(const char *str, char c)
{
	int	word;
	int	i;

	i = 0;
	word = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == c && str[i + 1] != c)
			word++;
		i++;
	}
	if (str[0] != '\0')
		word++;
	return (word);
}

static	char	*ft_word(const char *str, char c, int *i)
{
	char	*s;
	int		k;

	if (!(s = (char *)malloc(sizeof(s) * (ft_strlen(str)))))
		return (0);
	k = 0;
	while (str[*i] != c && str[*i])
	{
		s[k] = str[*i];
		k++;
		*i += 1;
	}
	s[k] = '\0';
	while (str[*i] == c && str[*i])
		*i += 1;
	return (s);
}

char			**ft_split(const char *str, char c)
{
	int		i;
	int		j;
	int		word;
	char	**result;

	i = 0;
	j = 0;
	word = ft_count_words(str, c);
	if (!(result = (char **)malloc(sizeof(result) * (ft_count_words(str, c) + 2))))
		return (0);
	while (str[i] == c && str[i])
		i++;
	while (j < word && str[i])
	{
		result[j] = ft_word(str, c, &i);
		j++;
	}
	result[j] = NULL;
	return (result);
}
