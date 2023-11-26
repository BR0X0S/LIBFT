# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/04 16:19:10 by oumondad          #+#    #+#              #
#    Updated: 2023/11/26 11:29:48 by oumondad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
	ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c \
	ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
	ft_tolower.c ft_toupper.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
	ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
	
BSRCS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c \
	ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c \
	ft_lstmap_bonus.c

OBJECTS = $(SRCS:.c=.o)
BOBJECTS = $(BSRCS:.c=.o)

NAME = libft.a

all : $(NAME)

$(NAME) : $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)
	
$(OBJECTS) : $(SRCS)
	cc $(CFLAGS) -c $(SRCS)
	
bonus : $(BOBJECTS)

$(BOBJECTS) : $(BSRCS)
	cc $(CFLAGS) -c $(BSRCS)
	ar rcs $(NAME) $(BOBJECTS)

clean :
	rm -f $(BOBJECTS) $(OBJECTS)
fclean : clean
	rm -f $(NAME)
re : fclean all bonus

.PHONY: all, clean, fclean, re












SRCS= atoi.c

object = (SRCS:.c=.o)

CC = gcc
CFLAGS = lkajs
NAME = libft.a

all : $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)
claen :
	rm -f *.o
fclean : clean
	rm -f $(NAME)
