/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pingu007 <pingu007@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 22:11:56 by royal             #+#    #+#             */
/*   Updated: 2024/05/29 14:06:58 by pingu007         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>


long int ft_reverse(char *r)
{
    long int s;
    char *endptr;
    s = (strtol(r, &endptr, 2)) * (-1);
    return (s);
}
