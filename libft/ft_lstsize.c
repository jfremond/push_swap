/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfremond <jfremond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 18:53:52 by jfremond          #+#    #+#             */
/*   Updated: 2021/09/02 16:54:50 by jfremond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *list)
{
	int		size;
	t_list	*cursor;

	size = 0;
	cursor = list;
	while (cursor)
	{
		cursor = cursor->next;
		++size;
	}
	return (size);
}
