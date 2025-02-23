# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antonio- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/28 13:07:04 by antonio-          #+#    #+#              #
#    Updated: 2025/02/21 17:03:06 by antonio-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
FLAGS = -Wall -Wextra -Werror
SRCDIR = src
HEADERDIR = includes
OBJDIR = build
SRC = $(wildcard $(SRCDIR)/*.cpp)
HEADER = $(wildcard $(HEADERDIR)/*.hpp)
OBJ = $(SRC:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)

NAME = account
MAKENAME = Makefile

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp $(HEADER)
	$(CC) $(FLAGS) -I$(HEADERDIR) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
