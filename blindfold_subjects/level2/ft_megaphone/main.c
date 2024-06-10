/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pingu007 <pingu007@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 12:07:13 by nguiard           #+#    #+#             */
/*   Updated: 2024/05/27 16:43:07 by pingu007         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_megaphone(char *str);

int main()
{
	char str[] = "No noise... zzz...";
	char str2[] = "LET'S GO 42 !";
	char str3[] = "From the chandelIIIIIIIIIEEEER";
	char str4[] = "";

	ft_megaphone(str);
	ft_megaphone(str2);
	ft_megaphone(str3);
	ft_megaphone(str4);
}