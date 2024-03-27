# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: inazaria <inazaria@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/18 15:00:09 by inazaria          #+#    #+#              #
#    Updated: 2024/03/27 12:28:02 by inazaria         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
    
    
SRC_FILES        = \
				ft_strlen.c  ft_toupper.c   main.c         ft_tolower.c    ft_substr.c     \
				ft_strrch.c  ft_strnstr.c   ft_strncmp.c   ft_strmapi.c    ft_strlcpy.c    \
				ft_strlcat.c ft_strjoin.c   ft_striteri.c  ft_strdup.c     ft_strchr.c     \
				ft_split.c   ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c ft_putchar_fd.c \
				ft_memset.c  ft_memmove.c   ft_memcpy.c    ft_memcmp.c     ft_memchr.c     \
				ft_isprint.c ft_isdigit.c   ft_isascii.c   ft_isalpha.c    ft_isalnum.c    \
				ft_calloc.c  ft_bzero.c     ft_atoi.c      ft_itoa.c       ft_strtrim.c 

SRC_FILES_BONUS  =	ft_lstmap_bonus.c    ft_lstiter_bonus.c      ft_lstclear_bonus.c \
					ft_lstdelone_bonus.c ft_lstadd_back_bonus.c  ft_lstlast_bonus.c  \
					ft_lstsize_bonus.c   ft_lstadd_front_bonus.c ft_lstnew_bonus.c

TEST_TXT_FILES = 	Test_ft_putchar_fd.txt        Test_ft_putendl_fd.txt        \
					Test_ft_putnbr_fd_INT_MAX.txt Test_ft_putnbr_fd_INT_MIN.txt \
					Test_ft_putnbr_fd_minus_1.txt Test_ft_putstr_fd.txt

OBJ_FILES_BONUS    = $(SRC_FILES_BONUS:.c=.o)
OBJ_FILES          = $(SRC_FILES:.c=.o)

CFLAGS             = -Wall -Wextra -Werror -g3 -I ./
OUTPUT             = libft.a 
CC                 = cc

RM                 = rm -rf 

.c.o :
	@$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all : $(OUTPUT)

bonus : $(OBJ_FILES) $(OBJ_FILES_BONUS)	
	ar rcs $(OUTPUT) $(OBJ_FILES) $(OBJ_FILES_BONUS) 	

$(OUTPUT) : $(OBJ_FILES)
	ar rcs $(OUTPUT) $(OBJ_FILES)	

clean : $(OBJ_FILES)
	$(RM) $(OBJ_FILES) 
	

fclean : clean
	$(RM) $(OUTPUT) $(OBJ_FILES_BONUS)
	

re : fclean all 

.PHONY : all clean fclean re bonus


