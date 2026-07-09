# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ypark <ypark@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/04 16:21:30 by ypark             #+#    #+#              #
#    Updated: 2026/06/17 17:17:07 by ypark            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Form

GREEN   = \033[32m
RESET   = \033[0m

CPP = c++
CPP_FLAGS = -Wall -Wextra -Werror -std=c++17
CPP_FLAGS += -fsanitize=address

SRCS = main.cpp Bureaucrat.cpp Form.cpp
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