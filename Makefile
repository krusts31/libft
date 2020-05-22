# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: alkrusts <alkrusts@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/05/20 11:05:23 by alkrusts      #+#    #+#                  #
#    Updated: 2020/05/22 08:10:05 by alkrusts      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = *.c

OBJECTFILES = *.o

INCLUDES=./

all: $(NAME)

$(NAME):
	gcc -c -Wall -Werror -Wextra $(SRC) -I $(INCLUDES)
	ar rc libft.a $(OBJECTFILES)
	ranlib libft.a
so:
	gcc -c -Wall -Werror -Wextra $(SRC) -I ./ -fPIC
	gcc -shared -o libft.so *.o -fPIC

clean:
	/bin/rm -f $(OBJECTFILES)

fclean: clean
	/bin/rm -f  $(NAME)

re: fclean all
