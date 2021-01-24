/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hohypark <hohypark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 04:41:02 by hohypark          #+#    #+#             */
/*   Updated: 2021/01/24 21:33:41 by hohypark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstnew(void *content)
{
    t_list *lst;

    if (!(lst = (t_list *)malloc(sizeof(t_list))))
        return (0);
    lst->content = content;
    lst->next = 0;
    return (lst);
}
