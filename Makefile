NAME = push_swap

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = push_swap.c src/utils.c

OBJS = $(SRC:.c=.o)

RM = rm -f

INCLUDE = -L ./libft -lft 
# -L le dice en que directorio esta la libft y -lft especifica que la libreria se llama lib'ft'

LIB_DIR = libft/

all: $(NAME)

$(NAME): $(OBJS) 
	@make -C $(LIB_DIR) bonus
	@ar -rcs $(NAME) $(OBJS)

clean:
	@$(RM) $(OBJS)
	@make -C $(LIB_DIR) clean

fclean: clean
	@$(RM) $(NAME)
	@make -C $(LIB_DIR) fclean

re:	fclean all

.PHONY: all clean fclean re