/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfremond <jfremond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 11:47:09 by jfremond          #+#    #+#             */
/*   Updated: 2021/09/16 14:56:52 by jfremond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <limits.h>
# include <stdio.h>

/* Structures */
typedef struct s_infos
{
	int	s_num;
	int	b_num;
	int	s_pos;
	int	b_pos;
	int	sorted;
	int	rsorted;
	int	pivot;
	int	size;
}				t_infos;

/* Initialize everything */
void	init_all(t_list *list_a, t_list *list_b, t_infos *infos);
void	init_struct(t_infos *infos);

/* Insert the values in the list */
void	insert_value(t_list **head_ref, int new_value);

/* Assign the index */
void	assign_index(t_list *list);
void	assign_minus_one(t_list *list);

/* Print lists */
void	print_list_a(t_list *list);
void	print_list_b(t_list *list);

/* Check if list is sorted */
int		is_sorted(t_list *list);
int		is_rsorted(t_list *list);

/* Check error cases */
int		is_a_num(char *argv);
int		is_an_int(long long nb);
int		is_existant(int argc, char **argv);
void	check_error(int index, char **argv, t_list *list_a, t_list *list_b);

/* Get extreme values */
int		get_big_num(t_list *list, t_infos *infos);
int		get_big_pos(t_list *list, t_infos *infos);
int		get_small_num(t_list *list, t_infos *infos);
int		get_small_pos(t_list *list, t_infos *infos);

/* Get all the required infos */
void	get_infos(t_list *list, t_infos *infos);

/* Free the lists and properly exit the program */
void	free_list(t_list *list);
void	free_all(t_list *list_a, t_list *list_b);
void	exit_failure(t_list *list_a, t_list *list_b);
void	exit_success(t_list *list_a, t_list *list_b);

/* Sorting instructions */
void	swap(t_list **list);
void	write_sa(t_list **list);
void	write_sb(t_list **list);

void	push(t_list **dest, t_list **source);
void	write_pa(t_list **dest, t_list **source);
void	write_pb(t_list **dest, t_list **source);

void	rotate(t_list **list);
void	write_ra(t_list **list);
void	write_rb(t_list **list);

void	reverse(t_list **list);
void	write_rra(t_list **list);
void	write_rrb(t_list **list);

/* Sorting algorithms and useful functions */
void	sort_three(t_list **list, t_infos *infos);
void	reverse_sort_three(t_list **list, t_infos *infos);
void	sort_five(t_list **list_a, t_list **list_b, t_infos *infos);
void	sort_average_list(t_list **list_a, t_list **list_b, t_infos *infos);
void	sort_long_list(t_list **list_a, t_list **list_b, t_infos *infos);
void	sort_very_long_list(t_list **list_a, t_list **list_b, t_infos *infos);

int		hold_f(t_list *list_a, int s_index, int b_index);
int		hold_s(t_list *list_a, int s_index, int b_index);
void	separate_stacks(t_list **list_a, t_list **list_b, t_infos *infos);
void	push_to_b(t_list **list_a, t_list **list_b, int first, int second);
void	push_to_a(t_list **list_a, t_list**list_b, t_infos *infos);

#endif
