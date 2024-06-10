/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfelsemb  <nfelsemb@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 21:50:54 by nfelsemb          #+#    #+#             */
/*   Updated: 2023/08/13 21:50:54 by nfelsemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_atoi(char *str);

int main(void)
{
    printf("%d\n", ft_atoi("0"));
    printf("%d\n", ft_atoi("-1"));
    printf("%d\n", ft_atoi("1"));
    printf("%d\n", ft_atoi("42"));
    printf("%d\n", ft_atoi("-42"));
    printf("%d\n", ft_atoi("-2147483648"));
    printf("%d\n", ft_atoi("2147483647"));
    printf("%d\n", ft_atoi("424244242"));
    printf("%d\n", ft_atoi("18a18"));
    printf("%d\n", ft_atoi("aaaaaaa"));
    printf("%d\n", ft_atoi("------q18"));
    printf("%d\n", ft_atoi("+-+-+-+-+-"));
    printf("%d\n", ft_atoi("-2069965478"));
    printf("%d\n", ft_atoi("-1873579965"));
    printf("%d\n", ft_atoi("1082511819"));
    printf("%d\n", ft_atoi("-1263859256"));
    printf("%d\n", ft_atoi("-680385262"));
    printf("%d\n", ft_atoi("928758293"));
    printf("%d\n", ft_atoi("-1990355502"));
    printf("%d\n", ft_atoi("1207308531"));
    printf("%d\n", ft_atoi("-1352062013"));
    printf("%d\n", ft_atoi("-1266844834"));
    printf("%d\n", ft_atoi("-2068534007"));
    printf("%d\n", ft_atoi("-2024252305"));
    printf("%d\n", ft_atoi("1491844195"));
    printf("%d\n", ft_atoi("+658144522"));
    printf("%d\n", ft_atoi("+1287844130"));
    printf("%d\n", ft_atoi("+1338954851"));
    printf("%d\n", ft_atoi("+1733747764"));
    printf("%d\n", ft_atoi("+252500816"));
    printf("%d\n", ft_atoi("+25250\n0816"));
}