/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3index.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <lgarse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/24 14:38:11 by lgarse            #+#    #+#             */
/*   Updated: 2019/12/27 14:18:45 by lgarse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void	sort_3index(t_folder **st_a)
{
	int	t;
	int	m;
	int	b;

	t = (*st_a)->index;
	m = (*st_a)->next->index;
	b = (*st_a)->next->next->index;
	if (t > m && m < b && b > t)
		sort3(st_a);
	if (t > m && m > b && b < t)
		sort1(st_a);
	if (t > m && m < b && b < t)
		sort4(st_a);
	if (t < m && m > b && b > t)
		sort2(st_a);
	if (t < m && m > b && b < t)
		sort5(st_a);
}
