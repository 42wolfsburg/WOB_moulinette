/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pingu007 <pingu007@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 22:09:03 by royal             #+#    #+#             */
/*   Updated: 2024/05/29 14:17:33 by pingu007         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

long int ft_reverse(char *r);

int	main()
{
    char *test1 = "1111";
    char *test2 = "1010101010";
    char *test3 = "10";
    char *test4 = "001111011";
    char *test5 = "1010101000";
    char *test6 = "0";
    
    // printf("%ld\n", ft_reverse(test1));
	// printf("%ld\n", ft_reverse(test2));
	// printf("%ld\n", ft_reverse(test3));
	// printf("%ld\n", ft_reverse(test4));
	// printf("%ld\n", ft_reverse(test5));
    // printf("%ld\n", ft_reverse(test6));
    
    char *endptr;
    printf("%ld\n", (strtol(test1, &endptr, 2)) * (-1));
    printf("%ld\n", (strtol(test2, &endptr, 2)) * (-1));
    printf("%ld\n", (strtol(test3, &endptr, 2)) * (-1));
    printf("%ld\n", (strtol(test4, &endptr, 2)) * (-1));
    printf("%ld\n", (strtol(test5, &endptr, 2)) * (-1));
    printf("%ld\n", (strtol(test6, &endptr, 2)) * (-1));
    

    return (0);
}
