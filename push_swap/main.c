/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeolim <jeolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 00:27:09 by jeolim            #+#    #+#             */
/*   Updated: 2022/11/07 17:57:27 by jeolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "stdio.h"

int main(int argc, char **argv)
{
	// t_node	a;
	// t_node	b;
	char	**arr;
	
	// printf("input >> num : %d\n", argc);
	// for(int i = 1; i < argc; i++)
	// {
	// 	printf("%d - list : %s\n", i, argv[i]);
	// }
	if (argc > 1)
	{
		arr = parse_arg(argc, argv);
	}
	return (0);
}