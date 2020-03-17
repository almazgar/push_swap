/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <lgarse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/22 18:53:45 by lgarse            #+#    #+#             */
/*   Updated: 2020/01/14 11:08:15 by lgarse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

int		push_list(char **new, t_folder **st_a)
{
	int			i;
	__int128_t	t;
	t_folder	*buffer;
	t_folder	*head;

	i = 0;
	while (new[i] != '\0')
	{
		if (!(head = malloc(sizeof(t_folder))))
			return (0);
		t = ft_atoi(new[i]);
		head->data = ft_atoi(new[i]);
		if (check_duble(head->data, st_a) || t > 2147483647 || t < -2147483648)
			ft_print_error();
		head->next = NULL;
		if (*st_a != NULL)
		{
			buffer = go_end_list(st_a);
			buffer->next = head;
		}
		else
			*st_a = head;
		i++;
	}
	return (i);
}
