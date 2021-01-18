/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hohypark <hohypark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 04:39:48 by hohypark          #+#    #+#             */
/*   Updated: 2021/01/18 04:39:56 by hohypark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(const char *s)
{
    int result;
    int flag;

    result = 0;
    flag = 0;
    while ((*s >= 9 && *s <= 13) || *s == 32)
        s++;
    if ((*s == '-' || *s == '+') && (s[1] >= '0' && s[1] <= '9'))
    {
        if(*s == '-')
            flag = 1;
        s++;
    }
    while (*s >= 48 && *s <= 57)
    {
        result = result * 10 + (*s - 48);
        s++;
    }
    result = flag == 1 ? -result : result;
    return (result == 0 ? 0 : result);
}
