/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfremond <jfremond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 15:54:12 by jfremond          #+#    #+#             */
/*   Updated: 2021/09/11 05:02:42 by jfremond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	print_list_a(t_list *list)
{
	int		i;
	t_list	*cursor;

	i = 0;
	cursor = list;
	printf("\033[1;33m _______________________________\n");
	printf("|  INDICE  |  INDEX  |  NUMBER  |\n");
	while (cursor)
	{
		printf("|%10d|%9d|%10d|\n", i, cursor->index, cursor->value);
		++i;
		cursor = cursor->next;
	}
	printf(" _______________________________\033[0;m\n");
}

void	print_list_b(t_list *list)
{
	int		i;
	t_list	*cursor;

	i = 0;
	cursor = list;
	printf("\033[1;35m _______________________________\n");
	printf("|  INDICE  |  INDEX  |  NUMBER  |\n");
	while (cursor)
	{
		printf("|%10d|%9d|%10d|\n", i, cursor->index, cursor->value);
		++i;
		cursor = cursor->next;
	}
	printf(" _______________________________\033[0;m\n");
}
