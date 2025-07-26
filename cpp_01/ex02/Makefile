# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/26 20:57:42 by yulpark           #+#    #+#              #
#    Updated: 2025/07/26 21:13:01 by yulpark          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = HiBrain

GREEN   = \033[32m
RESET   = \033[0m

CPP = g++
CPPFLAGS = -Wall -Wextra -Werror -std=c++11
CPPFLAGS += -fsanitize=address

SRCS = main.cpp
OBJS_DIR = objs/
OBJS_O = $(SRCS:.cpp=.o)
OBJS = $(addprefix $(OBJS_DIR), $(OBJS_O))

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)
	@echo "\n$(GREEN)Brain says hi..."

$(OBJS_DIR)%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	@rm -fr $(OBJS_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
