# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/09 15:55:30 by yulpark           #+#    #+#              #
#    Updated: 2025/08/11 19:20:21 by yulpark          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animals

RESET   = \033[32m
BRIGHT_BLUE = \033[94m

CPP = c++
CPP_FLAGS = -Wall -Wextra -Werror -std=c++17
#CPP_FLAGS += -fsanitize=address

SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp
OBJS_DIR = objs/
OBJS_O = $(SRCS:.cpp=.o)
OBJS = $(addprefix $(OBJS_DIR), $(OBJS_O))

all: $(NAME)

$(NAME): $(OBJS)
	@$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)
	@echo "$(BRIGHT_BLUE)Done!!$(RESET)\n"

$(OBJS_DIR)%.o: %.cpp Makefile
	@mkdir -p $(dir $@)
	@$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	@rm -fr $(OBJS_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
