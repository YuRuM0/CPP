# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/20 14:54:18 by yulpark           #+#    #+#              #
#    Updated: 2025/07/25 23:02:24 by yulpark          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = BraiiinnnzzZ

RESET   = \033[0m
GREEN   = \033[32m
YELLOW  = \033[33m
BOLD	= \033[1m

CPP = g++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
CPPFLAGS += -fsanitize=address

SRCS = main.cpp Zombie.hpp Zombie.cpp newZombie.cpp randomChump.cpp
OBJS_DIR = objs/
OBJS_O = $(SRCS:.cpp=.o)
OBJS = $(addprefix $(OBJS_DIR), $(OBJS_O))

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)
	@echo "\n$(GREEN)Creating an account...$(RESET)"
	@echo "$(GREEN)Done!!$(RESET)\n"

$(OBJS_DIR)%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CPP) $(CPPFLAGS) -c $< -o $@
	@echo "$(GREEN)Compiling: $< into $@$(RESET)"

clean:
	@rm -fr $(OBJS_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
