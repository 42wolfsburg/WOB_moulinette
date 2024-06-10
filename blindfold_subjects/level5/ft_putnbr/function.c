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

// void	ft_putnbr(int nbr)
// {
// 	printf("%d\n", nbr);
// }

void	ft_putchar(char c) 
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr) {
	if (nbr < 0) {
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr >= 10) {
		ft_putnbr(nbr / 10);
		nbr = nbr % 10;
	}
	if (nbr < 10)
		ft_putchar(nbr + 48);
}