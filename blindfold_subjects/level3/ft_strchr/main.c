/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pingu007 <pingu007@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 12:25:08 by nguiard           #+#    #+#             */
/*   Updated: 2024/05/28 15:54:11 by pingu007         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strchr(char c, char *str);

#include <stdio.h>

int main()
{
	printf("%s %s %s %s %s", ft_strchr('h', "shell"), ft_strchr('j', "gif"),
		ft_strchr('a', "kka"), ft_strchr('+', "all"), ft_strchr('o', "oreo"));
}