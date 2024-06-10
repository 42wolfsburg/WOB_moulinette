/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: royal <royal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 22:09:03 by royal             #+#    #+#             */
/*   Updated: 2023/08/13 22:45:37 by royal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putnbr(int nbr);

int main()
{
	printf("%d\n", 2147483647);
	ft_putnbr(2147483647);
	write(1, "\n", 1);
	printf("%d\n", 150);
	ft_putnbr(150);
	write(1, "\n", 1);
	printf("%d\n", 4242);
	ft_putnbr(4242);
	write(1, "\n", 1);
	printf("%d\n", 20700);
	ft_putnbr(20700);
	write(1, "\n", 1);
	printf("%d\n", -1);
	ft_putnbr(-1);
	write(1, "\n", 1);
	printf("%d\n", 1337);
	ft_putnbr(1337);
	write(1, "\n", 1);
	printf("%d\n", -1700);
	ft_putnbr(-1700);
	write(1, "\n", 1);
}
