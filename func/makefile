# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: seyildir <seyildir@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2022/11/26 19:08:12 by seyildir      #+#    #+#                  #
#    Updated: 2022/11/26 20:13:19 by seyildir      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
HEADER	= libft.h

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
COMPILE = $(CC) $(CFLAGS)

RM		= rm -f

AR		= ar
ARFLAGS	= -rc
ARCHIVE	= $(AR) $(ARFLAGS)

SRC 	=	ft_atoi.c \
			ft_bzero.c \
			ft_isalpha.c \
			ft_isalnum.c \
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
			ft_calloc.c \
			ft_strdup.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_itoa.c \
			ft_putchar_fd.c \

OBJ		= $(SRC:.c=.o)

all: $(NAME)($(OBJ))

%.o: %.c $(HEADER)
	$(COMPILE) -c $< -o $@ 

$(NAME): $(OBJ)
	$(ARCHIVE) $(NAME) $<

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all