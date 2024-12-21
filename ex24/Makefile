NAME = libft.a
OBJS = *.o
CFLAGS = -Wall -Wextra -Werror 
INCDIR = includes
FILES = srcs/*.c

ALL: $(NAME)

$(NAME) : $(OBJS)
	gcc $(CFLAGS) $(OBJS) -o $(NAME)
	ar rc $(NAME) $(OBJS)

%.o: %.c
	gcc $(CFLAGS) -c $< -o $@

.PHONY: clean fclean re

clean: 
	/bin/rm -f $(OBJS)

fclean : clean
	/bin/rm -f $(NAME)

re : fclean ALL