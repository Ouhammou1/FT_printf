/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putHEXAD.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 19:44:32 by bouhammo          #+#    #+#             */
/*   Updated: 2024/02/08 17:33:37 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexadecimal(unsigned int n, int *nbr)
{
	char	*base;

	base = "0123456789ABCDEF";
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
		ft_puthexadecimal((n / 16), nbr);
		ft_putchar(base[n % 16], nbr);
	}
}
