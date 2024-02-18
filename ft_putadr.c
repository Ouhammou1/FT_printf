/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 19:56:38 by bouhammo          #+#    #+#             */
/*   Updated: 2024/01/15 22:20:44 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	abcd(unsigned long n, int *nbr)
{
	char	*base;

	base = "0123456789abcdef";
	if (n < 0)
	{
		n = n * (-1);
	}
	if (n < 16)
	{
		ft_putchar(base[n], nbr);
	}
	else
	{
		abcd(n / 16, nbr);
		ft_putchar(base[n % 16], nbr);
	}
}

void	ft_putadr(unsigned long int n, int *nbr)
{
	ft_putstr("0x", nbr);
	abcd(n, nbr);
}
