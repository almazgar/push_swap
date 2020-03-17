/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   go_end_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <lgarse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/22 20:29:56 by lgarse            #+#    #+#             */
/*   Updated: 2019/12/22 20:29:56 by lgarse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

t_folder		*go_end_list(t_folder **st_a)
{
	t_folder	*last_nb;

	last_nb = *st_a;
	while (last_nb->next != NULL)
		last_nb = last_nb->next;
	return (last_nb);
}
