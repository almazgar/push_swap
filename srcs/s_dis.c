/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_dis.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <lgarse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/25 11:37:21 by lgarse            #+#    #+#             */
/*   Updated: 2019/12/27 14:18:45 by lgarse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

int				s_dis(t_folder **st_b, t_num *sl, int i)
{
	int			j;
	t_folder	*temp;

	temp = (*st_b);
	j = 0;
	while (temp && temp->index != i)
	{
		j++;
		temp = temp->next;
	}
	if (j > sl->count_b - j)
		j = sl->count_b - j;
	return (j);
}
