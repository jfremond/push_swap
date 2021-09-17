/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfremond <jfremond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 14:44:23 by jfremond          #+#    #+#             */
/*   Updated: 2021/09/17 11:15:56 by jfremond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	is_a_num(char *argv)
{
	int	i;

	i = 0;
	if (argv[i] == '-')
		++i;
	while (argv[i])
	{
		if (!ft_isdigit(argv[i]))
			return (-1);
		++i;
	}
	if (i > 11)
		return (-1);
	if (i == 11)
		if (argv[0] != '-' || argv[10] > '8')
			return (-1);
	if (i == 10)
		if (argv[0] > '2' || argv[9] > '7')
			return (-1);
	return (1);
}

int	is_an_int(long long nb)
{
	if (nb < INT_MIN || nb > INT_MAX)
		return (-1);
	return (1);
}

int	is_existant(int argc, char **argv)
{
	int	index;
	int	len;

	index = 0;
	while (++index < argc)
	{
		if (ft_strncmp(argv[index], "-0", 2) == 0)
			argv[index] = "0";
		if (ft_strlen(argv[argc]) > ft_strlen(argv[index]))
			len = ft_strlen(argv[argc]);
		else
			len = ft_strlen(argv[index]);
		if (ft_strncmp(argv[argc], argv[index], len) == 0)
			return (-1);
	}
	return (0);
}

void	check_error(int index, char **argv, t_list *list_a, t_list *list_b)
{
	if (is_a_num(argv[index]) == -1)
	{
		write(2, "Error\n", 6);
		exit_failure(list_a, list_b);
	}
	if (is_an_int(ft_atoll(argv[index])) == -1)
	{
		write(2, "Error\n", 6);
		exit_failure(list_a, list_b);
	}
	if (is_existant(index, argv) == -1)
	{
		write(2, "Error\n", 6);
		exit_failure(list_a, list_b);
	}
}
