# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rhamini <rhamini@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/19 21:04:00 by rhamini           #+#    #+#              #
#    Updated: 2024/03/21 10:53:34 by rhamini          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a 

CC = cc

FLAGS = -Wall -Wextra -Werror

AR = ar

RM = rm -f

FILES = ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_strchr.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putnbr_fd.c \
		ft_putendl_fd.c \
		ft_striteri.c \
		ft_strmapi.c \
		ft_itoa.c \
		ft_strtrim.c \
		ft_split.c \
		ft_printf.c \
		ft_prints.c \
		ft_printui.c \
		ft_printd.c \
		ft_printchar.c \
		ft_printptr.c \
		ft_printhex.c \
		get_next_line.c \
		get_next_line_utils.c \


OBJS = ${FILES:.c=.o}

.c.o:
		${CC} ${FLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
		ar rcs ${NAME} ${OBJS}

all:	$(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all