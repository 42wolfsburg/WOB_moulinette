/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pingu007 <pingu007@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 12:20:54 by nguiard           #+#    #+#             */
/*   Updated: 2024/05/28 17:03:00 by pingu007         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_rev(char *str)
{
	int	index;
	int	size;

	size = 0;
	while (str[size])
		size++;
	index = 0;
	while (index < size)
	{
		write(1, &str[size - 1 - index], 1);
		index++;
	}
}