# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ypark <ypark@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/08 15:25:11 by ypark             #+#    #+#              #
#    Updated: 2025/09/08 15:29:03 by ypark            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = easy_find

GREEN   = \033[32m
RESET   = \033[0m

CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++17
CPPFLAGS += -fsanitize=address

SRCS = main.cpp
OBJS_DIR = objs/
OBJS_O = $(SRCS:.cpp=.o)
OBJS = $(addprefix $(OBJS_DIR), $(OBJS_O))

HDRS = easyfind.hpp easyfind.tpp

all: $(NAME)

$(NAME): $(OBJS)
	@$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)
	@echo "$(GREEN)Done!!$(RESET)\n"

$(OBJS_DIR)%.o: %.cpp Makefile $(HDRS)
	@mkdir -p $(dir $@)
	@$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	@rm -fr $(OBJS_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re