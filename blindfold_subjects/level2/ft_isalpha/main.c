/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pingu007 <pingu007@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 22:09:03 by royal             #+#    #+#             */
/*   Updated: 2024/05/28 15:05:01 by pingu007         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
int	ft_isalpha(char *str);

int main()
{
	printf("%d\n", ft_isalpha("BONJOUR"));
	printf("%d\n", ft_isalpha("42"));
	printf("%d\n", ft_isalpha("JESUISUNEPHRASEDETEST"));
	printf("%d\n", ft_isalpha("Shoot depth teacher sand class plates dream dance fun basket term process struggle pretty tried belt log turn met trouble cent wool anything thy"));
	printf("%d\n", ft_isalpha("finish eventually loose thumb, almost friendly income due shells electric before bread recently progress raw difference sister wait exciting eleven coming law respect change!"));
}
