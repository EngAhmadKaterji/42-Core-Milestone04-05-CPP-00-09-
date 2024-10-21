# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/01 17:34:27 by akaterji          #+#    #+#              #
#    Updated: 2024/09/05 15:16:56 by akaterji         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Name of the executable
NAME = claptrap

# Source files
SRCS = main.cpp ClapTrap.cpp

# Object files
OBJS = $(SRCS:.cpp=.o)

# Colors and effects
RESET = \033[0m
BOLD = \033[1m
CYAN = \033[36m
GREEN = \033[32m
YELLOW = \033[33m

# Rules
all: header $(NAME)

header:
	@echo "$(CYAN)=============================$(RESET)"
	@echo "$(CYAN)=  $(BOLD) Aaaaand... OPEN!  $(RESET)$(CYAN)=$(RESET)"
	@echo "$(CYAN)=============================$(RESET)"

$(NAME): $(OBJS)
	@echo "$(YELLOW)Linking objects...$(RESET)"
	@$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)
	@echo "$(GREEN)Compilation complete!$(RESET)"
	@echo "$(GREEN)Executable: $(BOLD)$(NAME)$(RESET)"

%.o: %.cpp
	@echo "$(YELLOW)Compiling $<...$(RESET)"
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@echo "$(YELLOW)Cleaning object files...$(RESET)"
	@rm -f $(OBJS)
	@echo "$(GREEN)Clean complete!$(RESET)"

fclean: clean
	@echo "$(YELLOW)Removing executable...$(RESET)"
	@rm -f $(NAME)
	@echo "$(GREEN)Full clean complete!$(RESET)"

re: fclean all

.PHONY: all header clean fclean re
