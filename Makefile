# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: alkrusts <alkrusts@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/05/20 11:05:23 by alkrusts      #+#    #+#                  #
#    Updated: 2020/05/23 16:11:34 by alkrusts      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_atoi.c ft_isascii.c ft_memmove.c ft_putstr_fd.c \
      ft_strlcpy.c ft_tolower.c ft_bzero.c ft_isdigit.c \
      ft_memrcpy_bonus.c ft_search_bonus.c ft_strlen.c ft_toupper.c \
      ft_isprint.c ft_memset.c ft_split.c ft_strmapi.c \
      ft_compare_bonus.c ft_itoa.c ft_malloc1dim_bonus.c ft_putchar_bonus.c \
      ft_split_check_bonus.c ft_strncmp.c ft_finish_bonus.c \
      ft_malloc2dim_bonus.c ft_putchar_fd.c ft_strchr.c ft_strnstr.c \
      ft_initmem_bonus.c ft_memccpy.c ft_putendl_fd.c \
      ft_cpystr_bonus.c ft_strrchr.c ft_intlen_bonus.c \
      ft_memchr.c ft_putlist_bonus.c ft_strdup.c ft_strrev_bonus.c \
      ft_isalnum.c ft_memcmp.c ft_putnbr_fd.c ft_strjoin.c \
      ft_strtrim.c ft_isalpha.c ft_memcpy.c ft_putstr_bonus.c \
      ft_strlcat.c ft_substr.c ft_calloc.c

OBJECTFILES = ft_atoi.o ft_isascii.o ft_memmove.o ft_putstr_fd.o \
      ft_strlcpy.o ft_tolower.o ft_bzero.o ft_isdigit.o \
      ft_memrcpy_bonus.o ft_search_bonus.o ft_strlen.o ft_toupper.o \
      ft_isprint.o ft_memset.o ft_split.o ft_strmapi.o \
      ft_compare_bonus.o ft_itoa.o ft_malloc1dim_bonus.o ft_putchar_bonus.o \
      ft_split_check_bonus.o ft_strncmp.o ft_finish_bonus.o \
      ft_malloc2dim_bonus.o ft_putchar_fd.o ft_strchr.o ft_strnstr.o \
      ft_initmem_bonus.o ft_memccpy.o ft_putendl_fd.o \
      ft_cpystr_bonus.o ft_strrchr.o ft_intlen_bonus.o \
      ft_putlist_bonus.o ft_strdup.o ft_strrev_bonus.o ft_isalnum.o \
      ft_memcmp.o ft_putnbr_fd.o ft_strjoin.o ft_strtrim.o ft_isalpha.o \
      ft_memcpy.o ft_putstr_bonus.o ft_strlcat.o ft_substr.o \
      ft_memchr.o ft_calloc.o

BONUS_SRC = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
	ft_lstdelone.c ft_lstiter.c ft_lstmap.c ft_lstnew.c \
	ft_lstsize.c ft_lstlast.c

BONUS_OBJ = ft_lstadd_back.o ft_lstadd_front.o ft_lstclear.o \
       ft_lstdelone.o ft_lstiter.o ft_lstmap.o ft_lstnew.o \
       ft_lstsize.o ft_lstlast.o

INCLUDES = ./

.PHONY:	all clean fclean re bonus

all: $(NAME)

$(NAME):
	gcc -c -Wall -Werror -Wextra $(SRC) -I $(INCLUDES)
	ar rcs $(NAME) $(OBJECTFILES)

clean:
	/bin/rm -f $(OBJECTFILES) $(BONUS_OBJ)

fclean: clean
	/bin/rm -f  $(NAME)

re: fclean all

bonus:	$(BONUS_SRC) $(BONUS_OBJ)
	ar rcs $(NAME) $(OBJECTFILES) $(BONUS_OBJ)
