/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <lgarse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/24 10:36:32 by lgarse            #+#    #+#             */
/*   Updated: 2019/12/24 10:36:32 by lgarse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void	rb(t_folder **st, int i)
{
	t_folder	*temp;

	temp = *st;
	if (*st == NULL)
		return ;
	while ((*st)->next != NULL)
		*st = (*st)->next;
	(*st)->next = temp;
	temp = temp->next;
	*st = (*st)->next;
	(*st)->next = NULL;
	*st = temp;
	if (i)
		write(1, "rb\n", 3);
}
