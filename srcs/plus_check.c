/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   plus_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <lgarse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 17:24:05 by lgarse            #+#    #+#             */
/*   Updated: 2020/01/14 17:35:08 by lgarse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

int			plus_check(char *s)
{
	char	*t;
	char	*t1;

	t = ft_itoa(ft_atoi(s));
	t1 = ft_itoa(ft_atoi(&s[1]));
	if (((s[0] == '+') && (ft_strcmp(&s[1], t1)))
		|| ((s[0] != '+') && ft_strcmp(s, t)))
	{
		free(t);
		free(t1);
		return (1);
	}
	else
	{
		free(t);
		free(t1);
		return (0);
	}
}
