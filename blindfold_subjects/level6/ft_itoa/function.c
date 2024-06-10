/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: royal <royal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 22:11:56 by royal             #+#    #+#             */
/*   Updated: 2023/08/13 22:43:31 by royal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>

int ft_itoa(char *str)
{
    return(itoa(str));
}

// static int	count_size(int n)
// {
// 	int	i;

// 	i = 0;
// 	if (n < 0)
// 		n *= -1;
// 	while (n != 0)
// 	{
// 		n /= 10;
// 		i++;
// 	}
// 	return (i);
// }

// char	*ft_itoa(int num)
// {
// 	char		*dst;
// 	int			count;
// 	int			i;
// 	long int	n;

// 	dst = NULL;
// 	n = num;
// 	count = count_size(n);
// 	i = 0;
// 	if (n < 0 || count == 0)
// 		count++;
//     if (!(dst = (char*)malloc(sizeof(*dst) * (count + 1))))
// 		return (NULL);
// 	if (n < 0)
// 	{
// 		n *= -1;
// 		dst[0] = '-';
// 		i++;
// 	}
// 	while (count > i)
// 	{
// 		count--;
// 		dst[count] = (n % 10) + '0';
// 		n /= 10;
// 	}
// 	return (dst);
// }
