# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/20 14:49:38 by yulpark           #+#    #+#              #
#    Updated: 2025/07/26 15:46:51 by yulpark          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

GREEN   = \033[32m

CPP = g++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
CPPFLAGS += -fsanitize=address

SRCS = contact.cpp phonebook.cpp main.cpp
OBJS_DIR = objs/
OBJS_O = $(SRCS:.cpp=.o)
OBJS = $(addprefix $(OBJS_DIR), $(OBJS_O))

all: $(NAME)

$(NAME): $(OBJS)
	@g++ $(CPPFLAGS) $(OBJS) -o $(NAME)
	@echo "\n$(GREEN)Creating your PhoneBook... $(RESET)"
	@echo "$(GREEN)Done!!$(RESET)\n"

$(OBJS_DIR)%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	@rm -fr $(OBJS_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
