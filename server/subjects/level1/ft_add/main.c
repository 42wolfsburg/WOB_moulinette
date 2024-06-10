/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pingu007 <pingu007@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 22:09:03 by royal             #+#    #+#             */
/*   Updated: 2024/05/28 14:14:48 by pingu007         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_add(int *a, int*b);

int main()
{
	int	a = 42;
	int	b = 50;
	printf("%d\n", ft_add(&a, &b));
	printf("+ %d\n", ft_add(&a, &b) + ft_add(&a, &b));
	printf("- %d\n", ft_add(&a, &b) - ft_add(&a, &b));
	printf("/ %d\n", ft_add(&a, &b) / ft_add(&a, &b));
	printf("* %d\n", ft_add(&a, &b) * ft_add(&a, &b));
	int	c = 42;
	int	d = -50;
	printf("%d\n", ft_add(&a, &b));
	printf("+ %d\n", ft_add(&c, &d) + ft_add(&c, &d));
	printf("- %d\n", ft_add(&c, &d) - ft_add(&c, &d));
	printf("/ %d\n", ft_add(&c, &d) / ft_add(&c, &d));
	printf("* %d\n", ft_add(&c, &d) * ft_add(&c, &d));
}

