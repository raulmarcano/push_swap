NAME = push_swap

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = src/main.c src/utils.c src/parse.c src/create_stack.c src/overflow.c src/sort.c src/index.c \
		src/moves/swap.c src/moves/rotate.c src/moves/push.c \
		

OBJS = $(SRC:.c=.o)

RM = rm -f

INCLUDE = -L ./libft -lft 
# -L le dice en que directorio esta la libft y -lft especifica que la libreria se llama lib'ft'

LIB_DIR = libft/

all: $(NAME)

$(NAME): $(OBJS) 
	@make bonus -C $(LIB_DIR)
	@$(CC) $(CFLAGS) $(OBJS) $(INCLUDE) -o $(NAME)
	
clean:
	@$(RM) $(OBJS)
	@make clean -C $(LIB_DIR) 

fclean: clean
	@$(RM) $(NAME)
	@make fclean -C $(LIB_DIR) 

re:	fclean all

.PHONY: all clean fclean re