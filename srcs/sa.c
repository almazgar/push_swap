/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <lgarse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/24 10:41:36 by lgarse            #+#    #+#             */
/*   Updated: 2019/12/27 14:18:56 by lgarse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void	sa(t_folder **st_a, int i)
{
	t_folder *temp;

	if (*st_a == NULL)
		return ;
	temp = *st_a;
	*st_a = (*st_a)->next;
	temp->next = (*st_a)->next;
	(*st_a)->next = temp;
	if (i)
		write(1, "sa\n", 3);
}
