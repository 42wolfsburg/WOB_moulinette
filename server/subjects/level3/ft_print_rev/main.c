/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pingu007 <pingu007@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 12:25:08 by nguiard           #+#    #+#             */
/*   Updated: 2024/05/28 17:01:21 by pingu007         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_print_rev(char *str);


int	main(void)
{
	ft_print_rev("rainbow dash");
	write(1, "\n", 1);
	ft_print_rev("Ponies are awesome");
	write(1, "\n", 1);
	ft_print_rev("");
	write(1, "\n", 1);
	return (0);
}