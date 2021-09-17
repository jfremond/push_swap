/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_program.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfremond <jfremond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 15:13:08 by jfremond          #+#    #+#             */
/*   Updated: 2021/08/24 15:22:58 by jfremond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	free_list(t_list *list)
{
	t_list	*next;
	t_list	*tmp;

	if (!list)
		return ;
	tmp = list;
	while (tmp)
	{
		next = tmp->next;
		free(tmp);
		tmp = next;
	}
	list = NULL;
}

void	free_all(t_list *list_a, t_list *list_b)
{
	free_list(list_a);
	free_list(list_b);
}

void	exit_failure(t_list *list_a, t_list *list_b)
{
	free_all(list_a, list_b);
	exit(EXIT_FAILURE);
}

void	exit_success(t_list *list_a, t_list *list_b)
{
	free_all(list_a, list_b);
	exit(EXIT_SUCCESS);
}
