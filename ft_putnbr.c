/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 18:54:47 by bouhammo          #+#    #+#             */
/*   Updated: 2024/02/12 19:58:46 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_putnbr(int n, int *nbr)
{
	if (n == -2147483648)
	{
		ft_putstr("-2147483648", nbr);
		return ;
	}
	else
	{
		if (n < 0)
		{
			n = n * (-1);
			ft_putchar('-', nbr);
		}
		if (n < 10)
		{
			ft_putchar((n % 10) + '0', nbr);
		}
		else
		{
			ft_putnbr(n / 10, nbr);
			ft_putchar((n % 10) + '0', nbr);
		}
	}
}
