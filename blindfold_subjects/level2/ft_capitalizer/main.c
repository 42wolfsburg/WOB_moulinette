/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pingu007 <pingu007@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 10:35:00 by nguiard           #+#    #+#             */
/*   Updated: 2024/05/27 16:43:45 by pingu007         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_capitalizer(char *av);

int main()
{
	char str[] = "No noise... zzz...";
	char str2[] = "LET'S GO 42 !";
	char str3[] = "From the chandelIIIIIIIIIEEEER";
	char str4[] = "";

	ft_capitalizer(str);
	ft_capitalizer(str2);
	ft_capitalizer(str3);
	ft_capitalizer(str4);
}