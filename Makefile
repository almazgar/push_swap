# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lgarse <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/09 15:07:03 by lgarse            #+#    #+#              #
#    Updated: 2020/01/14 17:53:57 by lgarse           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


PSW_TARGET      = push_swap
CH_TARGET       = checker

CC              = gcc
CFLAGS          = -Wall -Wextra -Werror

LIBFT           = ./libft/libft.a
LIBFTINC        = -I./libft/
LIBFTLINK       = -L./libft -lft

PSW_SRC_PATH    = ./srcs/
PSW_FILES       = push_swap_main.c found_str.c\
                  pa.c pb.c ra.c rb.c rr.c rra.c rrb.c rrr.c sa.c sb.c\
                  ss.c plus_check.c\
                  go_end_list.c organizer.c check_duble.c push_list.c\
                  sort_good.c index_st_a.c simple_back.c is_sorted.c\
                  sort_3index.c small_sort.c  move_3_elem.c  s_dis.c s_dis2.c\
                  check_str.c move1.c move2.c move_back.c move_back_2.c\
                  move11.c move_back11.c move12.c move_back12.c move13.c\
                  move_back13.c move14.c move_back14.c mem_free.c free_stack.c\
                  m_b_rotate.c sort_21.c sort_102.c sort_103.c ajust_a.c\
                  new_free.c sort_4_5index.c for5_pb.c ft_print_error.c \

PSW_OBJ_PATH    = ./ps_objs/
PSW_SRC         = $(addprefix $(PSW_SRC_PATH), $(PSW_FILES))
PSW_OBJ         = $(addprefix $(PSW_OBJ_PATH), $(PSW_FILES:.c=.o))
PSW_INC         = -I./includes/ $(LIBFTINC)

CH_SRC_PATH     = ./srcs/
CH_FILES        =  get_next_line.c pa.c pb.c ra.c rb.c rr.c rra.c rrb.c rrr.c sa.c sb.c\
                   ss.c check_str.c push_list.c check_duble.c go_end_list.c new_free.c\
                   ft_print_error.c read_number.c checker_main.c read_command.c\
                   read_command2.c checker_cont.c mem_free.c free_stack.c plus_check.c\

CH_OBJ_PATH     = ./pc_objs/
CH_SRC          = $(addprefix $(CH_SRC_PATH), $(CH_FILES))
CH_OBJ          = $(addprefix $(CH_OBJ_PATH), $(CH_FILES:.c=.o))
CH_INC          = -I./includes/ $(LIBFTINC)

.PHONY: all clean fclean re

all: $(PSW_TARGET) $(CH_TARGET)

$(PSW_TARGET): $(PSW_OBJ)
	@echo "\033[1;36mpush_swap : Sources compiling...\033[0m"
	@make -C ./libft/
	@$(CC) $(CFLAGS) $(PSW_INC) -o $@ $(PSW_OBJ) $(LIBFTLINK)
	@echo "\033[1;34mpush_swap : compiled with success!\033[2m"

$(CH_TARGET): $(CH_OBJ)
	@echo "\033[1;35mchecker : Sources compiling...\033[0m"
	@make -C ./libft/
	@$(CC) $(CFLAGS) $(CH_INC) -o $@ $(CH_OBJ) $(LIBFTLINK)
	@echo "\033[1;31mchecker : compiled with success!\033[0m"

$(PSW_OBJ_PATH)%.o: $(PSW_SRC_PATH)%.c
	@mkdir $(PSW_OBJ_PATH) 2> /dev/null || true
	@$(CC) $(CFLAGS) $(PSW_INC) $(LIBFTINC) -o $@ -c $<

$(CH_OBJ_PATH)%.o: $(CH_SRC_PATH)%.c
	@mkdir $(CH_OBJ_PATH) 2> /dev/null || true
	@$(CC) $(CFLAGS) $(CH_INC) $(LIBFTINC) -o $@ -c $<

clean:
	@make -C libft/ clean
	@rm -rf $(PSW_OBJ)
	@rmdir $(PSW_OBJ_PATH) 2> /dev/null || true
	@rm -f $(CH_OBJ)
	@rmdir $(CH_OBJ_PATH) 2> /dev/null || true
	@echo "\033[1;30mObjects removed\033[0m"

fclean: clean
	@make -C libft/ fclean
	@rm -f $(PSW_TARGET) $(CH_TARGET)
	@echo "\033[1;30m./checker and ./push_swap removed\033[0m"

re: fclean all
	#@make -C libft/ re
