/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 19:09:56 by bouhammo          #+#    #+#             */
/*   Updated: 2024/01/15 22:25:30 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexa(unsigned int n, int *nbr)
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
		ft_puthexa(n / 16, nbr);
		ft_putchar(base[n % 16], nbr);
	}
}
