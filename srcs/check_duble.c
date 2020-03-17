/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_duble.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <lgarse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/22 20:26:56 by lgarse            #+#    #+#             */
/*   Updated: 2019/12/22 20:26:56 by lgarse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

int		check_duble(int a, t_folder **st_a)
{
	t_folder *buffer;

	buffer = *st_a;
	while (buffer != NULL)
	{
		if (buffer->data == a)
			return (1);
		buffer = buffer->next;
	}
	return (0);
}
