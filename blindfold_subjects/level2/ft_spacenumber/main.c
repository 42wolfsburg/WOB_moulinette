/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pingu007 <pingu007@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 22:09:03 by royal             #+#    #+#             */
/*   Updated: 2024/05/28 15:20:32 by pingu007         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
int	ft_spacenumber(char *str);

int main()
{
	printf("%d\n", ft_spacenumber("BONJOUR"));
	printf("%d\n", ft_spacenumber("42"));
	printf("%d\n", ft_spacenumber("42 569"));
	printf("%d\n", ft_spacenumber("42 * 560 = ?"));
	printf("%d\n", ft_spacenumber(" 48526597542871721 "));
}