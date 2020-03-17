/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_free.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <lgarse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 14:54:13 by lgarse            #+#    #+#             */
/*   Updated: 2020/01/11 17:56:10 by lgarse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void	new_free(char **new)
{
	int i;

	i = 0;
	while (new[i])
		free(new[i++]);
	free(new);
}
