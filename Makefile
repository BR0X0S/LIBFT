# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/04 16:19:10 by oumondad          #+#    #+#              #
#    Updated: 2023/11/21 20:33:16 by oumondad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
	ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c \
	ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
	ft_tolower.c ft_toupper.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
	ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
	
BSRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
	ft_lstclear.c ft_lstiter.c ft_lstmap.c

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