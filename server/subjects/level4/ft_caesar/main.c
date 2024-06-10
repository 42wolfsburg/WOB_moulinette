/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguiard <nguiard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 11:45:01 by nguiard           #+#    #+#             */
/*   Updated: 2022/08/25 13:15:09 by nguiard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_caesar(char *str);

int	main()
{
	ft_caesar("");
	ft_caesar("Poneys are wild.");
	ft_caesar("AkjhZ zLKIJz , 23y ");
	ft_caesar("abc");
	ft_caesar("42Wolfsburg");
}