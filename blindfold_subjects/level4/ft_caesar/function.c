/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguiard <nguiard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 11:39:22 by nguiard           #+#    #+#             */
/*   Updated: 2022/08/25 11:47:46 by nguiard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <unistd.h>

void	ft_caesar(char *str)
{
	int		i = 0;
	char	letter;
	while (str[i])
	{
		letter = str[i];
		if ((str[i] >= 'A' && str[i] <= 'U') || (str[i] >= 'a' && str[i] <= 'u'))
			letter += 5;
		if ((str[i] >= 'V' && str[i] <= 'Z') || (str[i] >= 'v' && str[i] <= 'z'))
			letter -= 21;
		write(1, &letter, 1);
		i += 1;
	}
	write(1, "\n", 1);
}
