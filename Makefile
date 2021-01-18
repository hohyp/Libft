# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hohypark <hohypark@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/01 15:58:37 by hohypark          #+#    #+#              #
#    Updated: 2021/01/18 04:42:46 by hohypark         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strncmp.c ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_toupper.c ft_tolower.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_strdup.c ft_calloc.c ft_memchr.c ft_atoi.c ft_strchr.c ft_memcmp.c ft_strrchr.c ft_memmove.c ft_strnstr.c ft_substr.c ft_strjoin.c ft_itoa.c ft_putchar_fd.c ft_putendl_fd.c ft_strmapi.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstiter.c ft_lstmap.c ft_lstclear.c ft_strtrim.c
OBJ = $(SRCS:.c=.o)
CC = gcc
CFLAG = -Wall -Wextra -Werror
NAME = libft.a
AR = ar rc

all : $(NAME)

.c.o :
	$(CC) $(CFLAG) -c $< -o $(<:.c=.o) -I libft.h

$(NAME) : ${OBJ}
	$(AR) $(NAME) $(OBJ)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re :	fclean all