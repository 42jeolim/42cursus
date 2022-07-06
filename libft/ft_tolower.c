/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeolim <jeolim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:18:31 by jeolim            #+#    #+#             */
/*   Updated: 2022/07/06 14:18:33 by jeolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_tolower(int c)
{
    if(c>=65 && c<=90)
        return (c+32);
    return (c);
}

#include <ctype.h>
#include <xlocale.h>
#include <stdio.h>

int main()
{
    printf("%d %d", tolower(' '), ft_tolower(' '));
}