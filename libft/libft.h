/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfremond <jfremond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 11:23:22 by jfremond          #+#    #+#             */
/*   Updated: 2021/09/12 14:31:32 by jfremond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_list
{
	int				value;
	int				index;
	struct s_list	*prev;
	struct s_list	*next;
}				t_list;

long long			ft_atoll(const char *str);
int					ft_isdigit(char c);
int					ft_strlen(const char *str);
int					ft_strncmp(const char *s1, const char *s2, int n);

int					ft_lstsize(t_list *list);
void				ft_lstadd_front(t_list **head_ref, t_list *new_node);
void				ft_lstadd_back(t_list **head_ref, t_list *new_node);
t_list				*ft_lstlast(t_list *list);

#endif
