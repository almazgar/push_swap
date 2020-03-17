/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <lgarse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/27 13:38:46 by lgarse            #+#    #+#             */
/*   Updated: 2019/12/27 13:41:19 by lgarse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void			free_stack(t_folder **st)
{
	t_folder	*tmp;

	while (*st)
	{
		tmp = *st;
		tmp->data = 0;
		tmp->index = 0;
		(*st) = (*st)->next;
		free(tmp);
	}
}
