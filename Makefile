# ************************************************************************** #
#                                                                            #
#                                                        :::      ::::::::   #
#   Makefile                                           :+:      :+:    :+:   #
#                                                    +:+ +:+         +:+     #
#   By: evillca- <evillca-@student.42madrid.com>   #+#  +:+       +#+        #
#                                                +#+#+#+#+#+   +#+           #
#   Created: 2024-09-25 08:24:25 by evillca-          #+#    #+#             #
#   Updated: 2024-09-25 08:24:25 by evillca-         ###   ########.fr       #
#                                                                            #
# ************************************************************************** #

NAME        = libft.a

cc          = cc

CFLAGS      = -Wall -Wextra -Werror

INCLUDES    = libft.h

SRCS        = ft_isalpha.c

BONUS		= 

OBJS        = $(SRCS:.c=.o)

AR          = ar rcs
RM          = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $@ $(OBJS)

bonus:

%.o: %.c
	cc $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

rebonus: fclean all bonus

.PHONY: all bonus clean fclean rebonus
