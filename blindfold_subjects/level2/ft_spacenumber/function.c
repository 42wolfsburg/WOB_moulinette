/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pingu007 <pingu007@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 22:11:56 by royal             #+#    #+#             */
/*   Updated: 2024/05/28 15:24:25 by pingu007         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_spacenumber(char *str)
{
	int	i = 0;

	while (str[i])
	{
		if ((!(str[i] >= 48 && str[i] <= 57) && str[i] != 32))
			return (0);
		i++;
	}
	return (1);
}
