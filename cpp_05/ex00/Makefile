# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/04 16:21:30 by ypark             #+#    #+#              #
#    Updated: 2026/07/11 20:08:04 by yulpark          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Bureaucrat

GREEN   = \033[32m
RESET   = \033[0m

CPP = c++
CPP_FLAGS = -Wall -Wextra -Werror -std=c++17
CPP_FLAGS += -fsanitize=address

SRCS = main.cpp Bureaucrat.cpp
OBJS_DIR = objs/
OBJS_O = $(SRCS:.cpp=.o)
OBJS = $(addprefix $(OBJS_DIR), $(OBJS_O)) //prepends the OBJS_DIR to each object file name

all: $(NAME)

$(NAME): $(OBJS)  //to build the target $(NAME), it depends on the object files $(OBJS)
	@$(CPP) $(CPP_FLAGS) $(OBJS) -o $(NAME) // -o: name the output file
	@echo "$(GREEN)Done!!$(RESET)\n"

$(OBJS_DIR)%.o: %.cpp Makefile
	@mkdir -p $(dir $@)
	@$(CPP) $(CPP_FLAGS) -c $< -o $@ // -c: compile only, do not link. $<: first prerequisite (the .cpp file), $@: target (the .o file)

clean:
	@rm -fr $(OBJS_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
