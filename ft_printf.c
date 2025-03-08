/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagonzal <sagonzal@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 18:05:21 by sagonzal          #+#    #+#             */
/*   Updated: 2025/03/08 18:06:53 by sagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"
#include <stdio.h>


static  void    ft_putchar(int c)
{
    c = 4;
}

int ft_printf(char const *format, ...)
{
	int	i;
	int	j;
	char	*str;
	char	b;

	b = 'a';

	str = "hola mundo";

	j = 10;
	i = ft_putchar()
	printf("shdkjfjhfkgjh %i %d %s %c", j, j, str, b);
    
}

