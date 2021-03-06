/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hohypark <hohypark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 04:40:49 by hohypark          #+#    #+#             */
/*   Updated: 2021/01/18 04:40:50 by hohypark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, unsigned int len)
{
	char *tmp;

	tmp = (char*)b;
	while (len--)
		*tmp++ = c;
	return (b);
}
