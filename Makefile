# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: seyildir <seyildir@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2022/11/26 19:08:12 by seyildir      #+#    #+#                  #
#    Updated: 2022/12/02 19:18:19 by seyildir      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #
################################
NAME	= libft.a
HEADER	= libft.h
################################
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
COMPILE = $(CC) $(CFLAGS)
################################
RM		= rm -f
################################
AR		= ar
ARFLAGS	= -rc
ARCHIVE	= $(AR) $(ARFLAGS)
################################
SRC_DIR = ./src
OBJ_DIR = ./obj
################################
SRC 	= $(wildcard $(SRC_DIR)/*.c)
OBJ		= $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRC))
################################
all: $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(SRC_DIR)/$(HEADER)
	@mkdir -p $(OBJ_DIR)
	$(COMPILE) -c $< -o $@

$(NAME): $(OBJ)
	$(ARCHIVE) $(NAME) $^

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: \
	all \
	clean \
	re \
	arc \
