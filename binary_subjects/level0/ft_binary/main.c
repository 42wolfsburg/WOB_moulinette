/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pingu007 <pingu007@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 22:09:03 by royal             #+#    #+#             */
/*   Updated: 2024/05/29 13:59:59 by pingu007         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void    ft_binary(int a);

int	main()
{
    int a[] = {1111, 10010, 01, 10, 1010110, 10101};

    int i = 0;
    while (i < 6)
    {
        // printf("a[i] = %d\n", a[i]);
        ft_binary(a[i]);
        i++;
    }
    return (0);
}
