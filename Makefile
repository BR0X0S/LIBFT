# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/04 16:19:10 by oumondad          #+#    #+#              #
#    Updated: 2023/11/07 15:47:53 by oumondad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_substr.c ft_strjoin.c
CC = gcc
CFLAGS = -Wall -Wextra -Werror
OBJECTS = $(SOURCES:.c=.o)
NAME = libft.a

 all : $(NAME)
 $(NAME) : $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)
clean :
	rm -f *.o
fclean : clean
	rm -f $(NAME)
re : fclean all