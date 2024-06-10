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

char *rev_print(char *s);

#include <stdio.h>

int	main()
{
	char str[] = "Bonjour";
	char str2[] = "";
	char str3[] = "pair";
	char str4[] = "impair!";

	char *p1 = rev_print(str);
	char *p2 = rev_print(str2);
	char *p3 = rev_print(str3);
	char *p4 = rev_print(str4);

	printf("\n%s %s %s %s\n", p1, p2, p3, p4);
}