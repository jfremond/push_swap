# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jfremond <jfremond@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/24 12:26:31 by jfremond          #+#    #+#              #
#    Updated: 2021/10/01 19:04:31 by jfremond         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	push_swap

LIBFT_D	=	libft
LIBFT_N	=	libft.a

SRCS	=	sources/assign_index.c			\
			sources/check_error.c			\
			sources/exit_program.c			\
			sources/get_infos.c				\
			sources/get_nums_and_pos.c		\
			sources/init_struct.c			\
			sources/insert_value.c			\
			sources/is_sorted.c				\
			sources/main.c					\
			sources/print_list.c			\
			sources/push.c					\
			sources/reverse.c				\
			sources/rotate.c				\
			sources/separate_stacks.c		\
			sources/sort_average_list.c		\
			sources/sort_five.c				\
			sources/sort_long_list.c		\
			sources/sort_three.c			\
			sources/sort_very_long_list.c	\
			sources/swap.c					\
			sources/utils.c					\

OBJS	=	$(SRCS:.c=.o)

INCS	=	includes

CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror
RM		=	rm -f

.c.o:
			$(CC) $(CFLAGS) -c $< -o $@ -I $(INCS)

$(NAME):	$(OBJS) $(LIBFT_D)
			make -C $(LIBFT_D)
			cp $(LIBFT_D)/$(LIBFT_N) $(NAME)
			ar -rcs $(NAME) $(OBJS)
			$(CC) $(CFLAGS) $(OBJS) $(LIBFT_D)/$(LIBFT_N) -o $(NAME)
			@echo "\033[1;92mpush_swap compiled\033[0;m"

all:		$(NAME)

clean:
			make clean -C $(LIBFT_D)
			$(RM) $(OBJS)
			@echo "\033[1;91mobject files removed\033[0;m"

fclean:		clean
			make fclean -C $(LIBFT_D)
			$(RM) $(NAME)
			@echo "\033[1;91mexecutables removed\033[0;m"

re:			fclean all

.PHONY:		all clean fclean re
