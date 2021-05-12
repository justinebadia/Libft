# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbadia <jbadia@student.42quebec.c>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/10 15:51:50 by jbadia            #+#    #+#              #
#    Updated: 2021/05/12 12:46:30 by jbadia           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS    = ft_atoi.c  ft_bzero.c ft_calloc.c  ft_isalnum.c $\
		  ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c $\
		  ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c $\
		  ft_memset.c ft_putchar_fd.c  ft_putendl_fd.c $\
		  ft_putstr_fd.c  ft_split.c ft_toupper.c ft_putnbr_fd.c $\
		  ft_strchr.c  ft_strdup.c ft_strjoin.c $\
		  ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c $\
		  ft_strncmp.c  ft_strnstr.c ft_strrchr.c $\
		  ft_strtrim.c ft_substr.c ft_tolower.c $\

BONUS = ft_lstsize.c ft_lstadd_front.c ft_lstadd_back.c ft_lstlast.c  $\
		ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c ft_lstnew.c $\

OBJS    = ${SRCS:.c=.o}

BONUS_OBJS = ${BONUS:.c=.o}

NAME    = libft.a

CC      = gcc

CFLAGS  = -Wall -Wextra -Werror

.o.c:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all :       ${NAME}

${NAME} :   ${OBJS}
			ar rcs ${NAME} ${OBJS}

bonus: ${OBJS} ${BONUS_OBJS}
		ar rcs ${NAME} ${OBJS} ${BONUS_OBJS}

clean :
			rm -f ${OBJS} ${BONUS_OBJS}

fclean :    clean
			rm -f ${NAME}

re :        fclean all


.PHONY: all clean fclean re bonus
