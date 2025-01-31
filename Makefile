# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pavorapa <pavorapa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/26 00:21:48 by pavorapa          #+#    #+#              #
#    Updated: 2024/12/11 19:13:39 by pavorapa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT =    ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
        ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c \
        ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c \
        ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c \
        ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c 

ADDITIONAL =     ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
                 ft_strjoin.c ft_strmapi.c ft_strtrim.c ft_substr.c ft_striteri.c \
                 ft_split.c ft_itoa.c
				
SRCS = ${LIBFT} ${ADDITIONAL}

SRCSALL = ${LIBFT} ${ADDITIONAL} 

OBJS = ${SRCS:.c=.o}

OBJSALL = ${SRCSALL:.c=.o} 

NAME = libft.a

CC = cc

CFLAGS = -Wall -Werror -Wextra

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:    ${OBJS}
		ar -rsc ${NAME} ${OBJS}

all:     ${NAME}

clean:    
		rm -f ${OBJSALL}

fclean:    clean;
		rm -f ${NAME}

re:    fclean all

.PHONY: all clean fclean re
