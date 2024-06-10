/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: royal <royal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 22:11:56 by royal             #+#    #+#             */
/*   Updated: 2023/08/13 22:43:31 by royal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void    ft_repeat(char *str)
{
    int i = 0;

    while (str[i])
    {
		int number = str[i] - 48;
		int j = 0;
		while (j < number)
    	{
        	write(1, &str[i], 1);
        	j++;
    	}
    	i++;
    }
    write(1, "\n", 1);
}
