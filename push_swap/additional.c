/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   additional.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeolim <jeolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 22:30:42 by jeolim            #+#    #+#             */
/*   Updated: 2022/11/07 22:30:49 by jeolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_str(char *s)
{
	int	len;

	if (s == NULL)
	{
		write(1, "(null)", ft_strlen("(null)"));
		return ;
	}
	len = 0;
	while (s[len])
		len += write(1, &s[len], 1);
}
