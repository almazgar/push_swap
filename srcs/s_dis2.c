/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_dis2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <lgarse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/25 12:16:26 by lgarse            #+#    #+#             */
/*   Updated: 2020/01/10 16:20:19 by lgarse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

int				s_dis2(t_folder **st_b, int i)
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
	return (j);
}
