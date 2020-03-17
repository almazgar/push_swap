/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <lgarse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/24 10:49:04 by lgarse            #+#    #+#             */
/*   Updated: 2019/12/27 14:18:56 by lgarse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void	sb(t_folder **st_b, int i)
{
	t_folder *temp;

	if (*st_b == NULL)
		return ;
	temp = *st_b;
	*st_b = (*st_b)->next;
	temp->next = (*st_b)->next;
	(*st_b)->next = temp;
	if (i)
		write(1, "sb\n", 3);
}
