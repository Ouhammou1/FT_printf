/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_long.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:05:26 by bouhammo          #+#    #+#             */
/*   Updated: 2024/02/16 00:44:08 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_long(unsigned int n, int *nbr)
{
	if (n < 0)
	{
		n = n * (-1);
	}
	if (n < 10)
	{
		ft_putchar((n % 10) + '0', nbr);
	}
	else
	{
		ft_putnbr_long(n / 10, nbr);
		ft_putchar((n % 10) + '0', nbr);
	}
}
