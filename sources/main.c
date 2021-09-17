/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfremond <jfremond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 11:34:22 by jfremond          #+#    #+#             */
/*   Updated: 2021/09/17 11:41:04 by jfremond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	dispatch_sorts(t_list **list_a, t_list **list_b,
						t_infos *infos, int count)
{
	if (count == 1)
		exit_success(*list_a, *list_b);
	else if (count == 2 || count == 3)
		sort_three(list_a, infos);
	else if (count >= 4 && count <= 6)
		sort_five(list_a, list_b, infos);
	else if (count >= 7 && count <= 50)
		sort_average_list(list_a, list_b, infos);
	else if (count >= 51 && count <= 200)
		sort_long_list(list_a, list_b, infos);
	else
		sort_very_long_list(list_a, list_b, infos);
}

int	main(int argc, char **argv)
{
	t_list	*list_a;
	t_list	*list_b;
	t_infos	inf;
	int		count;

	list_a = NULL;
	list_b = NULL;
	init_struct(&inf);
	if (argc < 2)
		exit_failure(list_a, list_b);
	count = 1;
	while (count < argc)
	{
		check_error(count, argv, list_a, list_b);
		insert_value(&list_a, ft_atoll(argv[count]));
		++count;
	}
	assign_index(list_a);
	--count;
	dispatch_sorts(&list_a, &list_b, &inf, count);
	exit_success(list_a, list_b);
}
