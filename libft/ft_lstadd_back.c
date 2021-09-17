/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfremond <jfremond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 12:46:09 by jfremond          #+#    #+#             */
/*   Updated: 2021/09/11 05:11:19 by jfremond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **head_ref, t_list *new_node)
{
	t_list	*tmp;

	if (*head_ref == NULL)
	{
		*head_ref = new_node;
		new_node->next = NULL;
		new_node->prev = NULL;
		return ;
	}
	tmp = *head_ref;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new_node;
	new_node->prev = tmp;
}
