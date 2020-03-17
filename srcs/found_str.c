/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   found_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <lgarse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 18:18:58 by lgarse            #+#    #+#             */
/*   Updated: 2020/01/14 15:48:49 by lgarse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void	found_str(char **new, t_folder **st_a, t_num *sl)
{
	if (check_str(new))
		ft_print_error();
	sl->count_a += push_list(new, st_a);
	if (sl->count_a < 0)
		exit(-1);
}
