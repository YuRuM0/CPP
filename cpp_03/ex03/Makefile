# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/03 19:55:59 by yulpark           #+#    #+#              #
#    Updated: 2025/08/09 15:53:07 by yulpark          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = DiamondTrap

GREEN   = \033[32m
RESET   = \033[0m

CPP = c++
CPP_FLAGS = -Wall -Wextra -Werror -std=c++17
CPP_FLAGS += -fsanitize=address

SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
OBJS_DIR = objs/
OBJS_O = $(SRCS:.cpp=.o)
OBJS = $(addprefix $(OBJS_DIR), $(OBJS_O))

all: $(NAME)

$(NAME): $(OBJS)
	@$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)
	@echo "$(GREEN)Done!!$(RESET)\n"

$(OBJS_DIR)%.o: %.cpp Makefile
	@mkdir -p $(dir $@)
	@$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	@rm -fr $(OBJS_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
