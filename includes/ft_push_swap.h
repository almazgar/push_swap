/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <lgarse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/24 10:27:20 by lgarse            #+#    #+#             */
/*   Updated: 2020/01/14 17:31:11 by lgarse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H
# define BUFF_SIZE 10

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <limits.h>
# include "../libft/libft.h"

typedef	struct			s_folder
{
	int					data;
	int					index;
	struct s_folder		*next;
}						t_folder;

typedef	struct			s_num
{
	int					count_a;
	int					count_b;
	int					mediana;
	int					quarta;
	int					octa;
}						t_num;

int						get_next_line(const int fd, char **line);
int						check_str(char **s);
int						push_list(char **new, t_folder **st_a);
t_folder				*go_end_list(t_folder **st_a);
int						organizer(t_folder **st_a, t_folder **st_b, t_num *sl);
int						check_duble(int a, t_folder **st_a);
void					sa(t_folder **st_a, int i);
void					sb(t_folder **st_b, int i);
void					ss(t_folder **st_a, t_folder **st_b, int i);
void					pa(t_folder **st_a, t_folder **st_b, t_num *sl, int i);
void					pb(t_folder **st_a, t_folder **st_b, t_num *sl, int i);
void					ra(t_folder **st, int i);
void					rb(t_folder **st, int i);
void					rr(t_folder **st_a, t_folder **st_b, int i);
void					rra(t_folder **st, int i);
void					rrb(t_folder **st_b, int i);
void					rrr(t_folder **st_a, t_folder **st_b, int i);
void					index_st_a(t_folder **st_a, t_num *sl);
void					move_back(t_folder **st_a, t_folder **st_b, t_num *sl);
void					small_sort(t_folder **st_a, t_folder **st_b, t_num *sl);
void					sort_3index(t_folder **st_a);
void					sort1(t_folder **a);
void					sort2(t_folder **a);
void					sort3(t_folder **a);
void					sort4(t_folder **a);
void					sort5(t_folder **a);
int						s_dis(t_folder **st_b, t_num *sl, int i);
int						s_dis2(t_folder **st_b, int i);
void					move1(t_folder **st_a, t_folder **st_b, t_num *sl);
void					move2(t_folder **st_a, t_folder **st_b, t_num *sl);
void					move_back_2(t_folder **st_a, t_folder **st_b,
						t_num *sl);
void					move11(t_folder **st_a, t_folder **st_b, t_num *sl);
void					move12(t_folder **st_a, t_folder **st_b, t_num *sl);
void					move13(t_folder **st_a, t_folder **st_b, t_num *sl);
void					move14(t_folder **st_a, t_folder **st_b, t_num *sl);
void					move_back11(t_folder **st_a, t_folder **st_b,
						t_num *sl);
void					move_back12(t_folder **st_a, t_folder **st_b,
						t_num *sl);
void					move_back13(t_folder **st_a, t_folder **st_b,
						t_num *sl);
void					move_back14(t_folder **st_a, t_folder **st_b,
						t_num *sl);
void					simple_back(t_folder **st_a, t_folder **st_b,
						t_num *sl,
						int low);
int						*sort_good(int *good, t_num *sl);
void					mem_free(t_folder **st_a, t_folder **st_b);
void					free_stack(t_folder **st);
void					m_b_rotate(t_folder **st_a, t_folder **st_b, t_num *sl,
						int low);
void					sort_21(t_folder **st_a, t_folder **st_b, t_num *sl);
void					sort_102(t_folder **st_a, t_folder **st_b, t_num *sl);
void					sort_103(t_folder **st_a, t_folder **st_b, t_num *sl);
void					ajust_a(t_folder **st_a, t_num *sl);
void					new_free(char **new);
void					sort_4_5index(t_folder **st_a, t_folder **st_b,
						t_num *sl);
void					for5_pb(t_folder **st_a, t_folder **st_b, t_num *sl,
						int i);
void					ft_print_error();
t_folder				*read_number(char **argv, t_num *sl);
int						read_command(t_folder **st_a, t_folder **st_b,
						char *line, t_num *sl);
int						read_command2(t_folder **st_a, t_folder **st_b,
						char *line);
int						main(int argc, char **argv);
void					found_str(char **new, t_folder	**st_a, t_num *sl);
int						is_sorted(t_folder **st_a);
void					checker_cont(t_folder **st_a, t_num	sl);
int						plus_check(char *s);
#endif
