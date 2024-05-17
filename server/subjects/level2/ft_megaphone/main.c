/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_megaphone_main.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 12:07:13 by nguiard           #+#    #+#             */
/*   Updated: 2023/02/20 12:32:49 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_megaphone(char *str);

int main()
{
	char str[] = "faites pas de bruit... zzz...";
	char str2[] = "VOUS GENEZ PAS 42 !";
	char str3[] = "From the chandelIIIIIIIIIEEEER";
	char str4[] = "";

	ft_megaphone(str);
	ft_megaphone(str2);
	ft_megaphone(str3);
	ft_megaphone(str4);
}