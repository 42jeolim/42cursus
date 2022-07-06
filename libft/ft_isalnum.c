/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeolim <jeolim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 13:36:49 by jeolim            #+#    #+#             */
/*   Updated: 2022/07/06 13:36:50 by jeolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalnum(int c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) 
        return (1);
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}

#include <ctype.h>
#include <stdio.h>
int main()
{
    printf("%d %d", isalnum('1'), ft_isalnum('1'));
}
