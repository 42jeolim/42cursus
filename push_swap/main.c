/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeolim <jeolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 00:27:09 by jeolim            #+#    #+#             */
/*   Updated: 2022/10/26 03:20:36 by jeolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	t_node	a;
	t_node	b;
	char	**arr;
	
	if (argc == 1)
		return (0);
	if (argc > 1)
	{
		arr = parse_arg(argc, argv);
	}
	return (0);
}