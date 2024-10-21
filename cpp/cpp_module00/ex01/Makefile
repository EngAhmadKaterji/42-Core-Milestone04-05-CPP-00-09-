# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -MMD -MP

# Name of the executable
NAME = phonebook

# Source files
SRCS = main.cpp contact.cpp phonebook.cpp

# Object files
OBJS = $(SRCS:.cpp=.o)

# Dependency files
DEPS = $(OBJS:.o=.d)

# Colors and effects
RESET = \033[0m
BOLD = \033[1m
CYAN = \033[36m
GREEN = \033[32m
YELLOW = \033[33m

# Rules
all: header $(NAME)

header:
	@echo "$(CYAN)========================================$(RESET)"
	@echo "$(CYAN)=  $(BOLD)Compiling MY Awesome PhoneBook...   $(RESET)$(CYAN)=$(RESET)"
	@echo "$(CYAN)========================================$(RESET)"

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
	@rm -f $(OBJS) $(DEPS)
	@echo "$(GREEN)Clean complete!$(RESET)"

fclean: clean
	@echo "$(YELLOW)Removing executable...$(RESET)"
	@rm -f $(NAME)
	@echo "$(GREEN)Full clean complete!$(RESET)"

re: fclean all

# Include dependency files
-include $(DEPS)

.PHONY: all header clean fclean re
