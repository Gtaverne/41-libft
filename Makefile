# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gtaverne <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/25 10:53:31 by gtaverne          #+#    #+#              #
#    Updated: 2020/11/19 15:15:52 by user42           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c \
			  ft_memmove.c ft_memchr.c ft_memcmp.c ft_isalpha.c ft_isdigit.c \
			  ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c \
			  ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c \
			  ft_strnstr.c ft_atoi.c \
			  ft_calloc.c ft_strdup.c \
			  ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
			  ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
			  ft_putnbr_fd.c

BONUS_SRCS	= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
			  ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c\
			  ft_lstmap.c

OBJS	= ${SRCS:.c=.o}
BONUS_OBJS = ${BONUS_SRCS:.c=.o}
NAME	= libft.a
CC		= clang
CFLAGS	= -Wall -Wextra -Werror -Iincludes
RM		= rm -f
LIB		= ar -rcs

all:			${NAME}

${NAME}:		${OBJS}
				${LIB} ${NAME} ${OBJS}

bonus: $(OBJS) $(BONUS_OBJS)
				${LIB} ${NAME} ${OBJS} ${BONUS_OBJS}

clean:
				${RM} ${OBJS} ${BONUS_OBJS}

fclean:			clean
				${RM} ${NAME}

re:				fclean all

.PHONY:			all clean fclean re bonus
