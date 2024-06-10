/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: royal <royal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 22:09:03 by royal             #+#    #+#             */
/*   Updated: 2023/08/13 22:36:57 by royal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

int main()
{
	printf("%s", "BONJOUR\n");
	printf("%d\n", ft_strlen("BONJOUR"));
	printf("%s", "1\n");
	printf("%d\n", ft_strlen("1"));
	printf("%s", "JE SUIS UNE PHRASE DE TEST\\n\n");
	printf("%d\n", ft_strlen("JE SUIS UNE PHRASE DE TEST\n"));
	printf("%s", "shoot depth teacher sand class plates dream dance fun basket term process struggle pretty tried belt log turn met trouble cent wool anything thy\n");
	printf("%d\n", ft_strlen("shoot depth teacher sand class plates dream dance fun basket term process struggle pretty tried belt log turn met trouble cent wool anything thy"));
	printf("%s", "finish eventually loose thumb almost friendly income due shells electric before bread recently progress raw difference sister wait exciting eleven coming law respect change\n");
	printf("%d\n", ft_strlen("finish eventually loose thumb almost friendly income due shells electric before bread recently progress raw difference sister wait exciting eleven coming law respect change"));
}
