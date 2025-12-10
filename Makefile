# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: inazaria <inazaria@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/18 15:00:09 by inazaria          #+#    #+#              #
#    Updated: 2025/12/10 15:36:45 by inazaria         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
    
# Libft
SRC_FILES_NAMES =  libft/ft_atoi_base.c
SRC_FILES_NAMES += libft/ft_atoi.c
SRC_FILES_NAMES += libft/ft_atoi_long.c
SRC_FILES_NAMES += libft/ft_bzero.c
SRC_FILES_NAMES += libft/ft_calloc.c
SRC_FILES_NAMES += libft/ft_isalnum.c
SRC_FILES_NAMES += libft/ft_isalpha.c
SRC_FILES_NAMES += libft/ft_isascii.c
SRC_FILES_NAMES += libft/ft_isdigit.c
SRC_FILES_NAMES += libft/ft_isprint.c
SRC_FILES_NAMES += libft/ft_itoa.c
SRC_FILES_NAMES += libft/ft_lstadd_back_bonus.c
SRC_FILES_NAMES += libft/ft_lstadd_front_bonus.c
SRC_FILES_NAMES += libft/ft_lstclear_bonus.c
SRC_FILES_NAMES += libft/ft_lstdelone_bonus.c
SRC_FILES_NAMES += libft/ft_lstiter_bonus.c
SRC_FILES_NAMES += libft/ft_lstlast_bonus.c
SRC_FILES_NAMES += libft/ft_lstmap_bonus.c
SRC_FILES_NAMES += libft/ft_lstnew_bonus.c
SRC_FILES_NAMES += libft/ft_lstsize_bonus.c
SRC_FILES_NAMES += libft/ft_memchr.c
SRC_FILES_NAMES += libft/ft_memcmp.c
SRC_FILES_NAMES += libft/ft_memcpy.c
SRC_FILES_NAMES += libft/ft_memmove.c
SRC_FILES_NAMES += libft/ft_memset.c
SRC_FILES_NAMES += libft/ft_putchar_fd.c
SRC_FILES_NAMES += libft/ft_putendl_fd.c
SRC_FILES_NAMES += libft/ft_putnbr_fd.c
SRC_FILES_NAMES += libft/ft_putstr_fd.c
SRC_FILES_NAMES += libft/ft_split.c
SRC_FILES_NAMES += libft/ft_strchr.c
SRC_FILES_NAMES += libft/ft_strdup.c
SRC_FILES_NAMES += libft/ft_striteri.c
SRC_FILES_NAMES += libft/ft_strjoin.c
SRC_FILES_NAMES += libft/ft_strlcat.c
SRC_FILES_NAMES += libft/ft_strlcpy.c
SRC_FILES_NAMES += libft/ft_strlen.c
SRC_FILES_NAMES += libft/ft_strlen_till_char.c
SRC_FILES_NAMES += libft/ft_strmapi.c
SRC_FILES_NAMES += libft/ft_strncmp.c
SRC_FILES_NAMES += libft/ft_strnstr.c
SRC_FILES_NAMES += libft/ft_strrch.c
SRC_FILES_NAMES += libft/ft_strtrim.c
SRC_FILES_NAMES += libft/ft_substr.c
SRC_FILES_NAMES += libft/ft_tolower.c
SRC_FILES_NAMES += libft/ft_toupper.c


# Get next line
SRC_FILES_NAMES += get_next_line/get_next_line.c
SRC_FILES_NAMES += get_next_line/get_next_line_utils.c

# printf
SRC_FILES_NAMES += ft_printf/printf_utils/c_conversion.c
SRC_FILES_NAMES += ft_printf/printf_utils/d_and_i_conversions.c
SRC_FILES_NAMES += ft_printf/printf_utils/ft_putchar.c
SRC_FILES_NAMES += ft_printf/printf_utils/ft_putnbr.c
SRC_FILES_NAMES += ft_printf/printf_utils/ft_putstr.c
SRC_FILES_NAMES += ft_printf/printf_utils/length_of_num.c
SRC_FILES_NAMES += ft_printf/printf_utils/p_conversion.c
SRC_FILES_NAMES += ft_printf/printf_utils/s_conversion.c
SRC_FILES_NAMES += ft_printf/printf_utils/u_conversion.c
SRC_FILES_NAMES += ft_printf/printf_utils/x_and_X_conversions.c
SRC_FILES_NAMES += ft_printf/printf_utils/conversion_utils.c
SRC_FILES_NAMES += ft_printf/printf_utils/parsing_utils.c
SRC_FILES_NAMES += ft_printf/printf_utils/percent_conversion.c
SRC_FILES_NAMES += ft_printf/ft_printf.c

SRC_DIR 	= ./src/
INC_DIR		= ./inludes/
BUILD_DIR 	= ./build/

# Full path to .c files
SRC_FILES = $(addprefix $(SRC_DIR), $(SRC_FILES_NAMES))

# .o files for compilation
OBJ_FILES = $(patsubst $(SRC_DIR)%.c, $(BUILD_DIR)%.o, $(SRC_FILES))

# .d files for header dependency
DEP_FILES = $(patsubst $(SRC_DIR)%.c, $(BUILD_DIR)%.d, $(SRC_FILES))


#<><><><><><><> Variables <><><><><><><><><><><><><><><><><>

BUFFER_SIZE     = 1
CC		= cc
RM		= rm -rf
CFLAGS		= -Wall -Wextra -Werror -I $(INC_DIR) -D BUFFER_SIZE=$(BUFFER_SIZE) -MMD -MP
NAME		= libft.a
MKDIR		= mkdir -p

BLUE	:= \033[34m
BROWN	:= \033[33m
GREEN	:= \033[32m
RED	:= \033[31m
NC	:= \033[0m
ECHO	:= printf '%b\n'


#<><><><><><><> Recipes <><><><><><><><><><><><><><><><><><>

$(BUILD_DIR)%.o: $(SRC_DIR)%.c
	@$(MKDIR) $(dir $@)
	@$(ECHO) "\033[34m[CMP] Compiling $<...$(NC)"
	@$(CC) -c $(CFLAGS) $< -o $@ 


# Adding the .d files as tracked dependencies
-include $(DEP_FILES)

all: $(NAME)

re: fclean all

$(NAME): $(OBJ_FILES)
	@$(ECHO) "$(BROWN)[LNK] Linking all object files into static library$(NC)"	
	@ar rcs $(NAME) $(OBJ_FILES) 
	@$(ECHO) "$(GREEN)[LNK] Linked all object files into $(NAME)$(NC)"

clean : 
	@$(ECHO) "$(BROWN)[CLN] Cleaning object and dependency files...$(NC)"
	@$(RM) $(BUILD_DIR)
	@$(ECHO) "$(GREEN)[CLN] Clean complete.$(NC)"

fclean : 
	@$(ECHO) "$(BROWN)[CLN] Cleaning object, dependency files, and executable...$(NC)"
	@$(RM) $(BUILD_DIR) $(NAME)
	@$(ECHO) "$(GREEN)[CLN] Clean complete.$(NC)"



.DEFAULT_GOAL := all
.PHONY:			all clean fclean re bonus
