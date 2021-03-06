NAME = minishell
LIB = minishell.a
MAIN = minishell.c
SRC =./exec/echo_main.c \
	./exec/unset.c \
	./exec/start.c \
	./exec/env_main.c \
	./exec/exec_cmd.c \
	./exec/export_main.c \
	./exec/ls_maker.c  \
	./exec/pwd_main.c \
	./exec/cd_main.c \
	./get_next_line/get_next_line.c \
	./get_next_line/get_next_line_utils.c \
	./parss/divid_input.c \
	./parss/ls_maker.c \
	./parss/main.c \
	./parss/minishell_utils.c \
	./parss/mns_utils_1.c \
	./parss/search_files.c

# MAIN = test.c
# SRC = minishell_utils.c

LIBFT = ./libft/libft.a

OBJ = $(SRC:.c=.o)

# FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME) : $(OBJ) 
	ar rcs $(LIB) $(OBJ)
	cd ./libft && make
	gcc $(FLAGS) $(MAIN) $(LIB) $(LIBFT) -o $(NAME)
	./minishell

%.o: %.c
	gcc $(FLAGS) -o $@ -c $<

clean:
	@cd ./libft && make -s fclean
	@rm -rf $(OBJ) $(LIB)

fclean: clean
	@rm -f $(NAME)

re: fclean all