# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: inazaria <inazaria@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/18 15:00:09 by inazaria          #+#    #+#              #
#    Updated: 2024/03/20 03:11:02 by inazaria         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


C_FILES        = \
				ft_strlen.c  main.c         ft_toupper.c   ft_tolower.c    ft_substr.c     \
				ft_strrch.c  ft_strnstr.c   ft_strncmp.c   ft_strmapi.c    ft_strlcpy.c    \
				ft_strlcat.c ft_strjoin.c   ft_striteri.c  ft_strdup.c     ft_strchr.c     \
				ft_split.c   ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c ft_putchar_fd.c \
				ft_memset.c  ft_memmove.c   ft_memcpy.c    ft_memcmp.c     ft_memchr.c     \
				ft_isprint.c ft_isdigit.c   ft_isascii.c   ft_isalpha.c    ft_isalnum.c    \
				ft_calloc.c  ft_bzero.c     ft_atoi.c      ft_itoa.c       ft_strtrim.c 

C_FILES_BONUS = ft_listmap_bonus.c   ft_lstiter_bonus.c      ft_lstclear_bonus.c \
				ft_lstdelone_bonus.c ft_lastadd_back_bonus.c ft_lstlast_bonus.c  \
				ft_lstsize_bonus.c   ft_lstadd_front_bonus.c ft_lstnew_bonus.c

SRC_PATH           = ./src/
SRC_PATH_BONUS     = ./src/bonus/
HEADERPATH         = ./include/

SRC_FILES_BONUS    = $(addprefix $(SRC_PATH_BONUS), $(C_FILES_BONUS))
SRC_FILES          = $(addprefix $(SRC_PATH), $(C_FILES))
OBJ_FILES_BONUS    = $(SRC_FILES_BONUS:.c=.o)
OBJ_FILES          = $(SRC_FILES:.c=.o)

CFLAGS             = -Wall -Wextra -Werror -g3
OUTPUT             = libft 
CC                 = cc

RM                 = rm -rf 

TEST_LIBRARY       = @$(CC) $(OBJ_FILES) -o test_library
TEST_LIBRARY_BONUS = @$(cc) $(OBJ_FILES_BONUS) -o test_library_bonus

.c.o :
	@$(CC) $(CFLAGS) -I $(HEADERPATH) -c $< -o $(<:.c=.o)

all : $(OUTPUT)  test

test : $(OBJ_FILES)
	@echo -e 'Compiling the Test file :\033[0;31m test_library'
	$(TEST_LIBRARY)
	@echo -e '\033[0mSuccesfully compiled\033[0;32m test_library'

test_bonus : $(OBJ_FILES_BONUS)
	@echo -e 'Compiling the Bonus Test file :\033[0;31m test_library_bonus\033[0m'	
	$(TEST_LIBRARY_BONUS)	
	@echo -e 'Succesfully compiled\033[0;32m test_library_bonus\033[0m'

bonus : $(OBJ_FILES) $(OBJ_FILES_BONUS)	
	@echo -e 'Compiling the library with\033[0;33m bonuses\033[0m:\033[0;31m libft.a\033[0m'
	@ar rc $(OUTPUT) $(OBJ_FILES) $(OBJ_FILES_BONUS) 	
	@echo -e 'Succesfully made the library with\033[0;33m bonuses\033[0m:\033[0;32m libft.a\033[0m'

$(OUTPUT) : $(OBJ_FILES)
	@echo -e 'Compiling the library :\033[0;31m libft.a\033[0m'
	@ar rc $(OUTPUT) $(OBJ_FILES)	
	@echo -e 'Succesfully made the library :\033[0;32m libft.a\033[0m'

clean : $(OBJ_FILES)
	@$(RM) $(OBJ_FILES) 
	@echo -e "Removing all\033[0;31m objects files\033[0m from $(SRC_PATH)"
	

fclean :
	@$(RM) $(OUTPUT) $(OBJ_FILES) test_library	
	@echo -e "Removing all\033[0;31m objects files\033[0m from $(SRC_PATH)"
	@echo -e "Removing library test file :\033[0;31m test_library\033[0m"	
	@echo -e "Removing bonus test files :\033[0;31m test_library_bonus\033[0m"
	@echo -e "Removing\033[1;36m libft.a\033[0m"
	

re : fclean all 

.PHONY : all clean fclean re bonus test test_bonus


