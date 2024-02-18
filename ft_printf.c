/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 23:37:05 by bouhammo          #+#    #+#             */
/*   Updated: 2024/02/18 11:49:35 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static void	check(char str, va_list list, int *nbr)
{
	if (str == 'd' || str == 'i')
		ft_putnbr(va_arg(list, int), nbr);
	else if (str == 'c')
		ft_putchar(va_arg(list, int), nbr);
	else if (str == '%')
		ft_putchar('%', nbr);
	else if (str == 's')
		ft_putstr(va_arg(list, char *), nbr);
	else if (str == 'x')
		ft_puthexa(va_arg(list, int), nbr);
	else if (str == 'X')
		ft_puthexadecimal(va_arg(list, int), nbr);
	else if (str == 'p')
		ft_putadr(va_arg(list, unsigned long), nbr);
	else if (str == 'u')
		ft_putnbr_long(va_arg(list, long long), nbr);
	else
	{
		ft_putchar(str, nbr);
	}
}

int	ft_printf(const char *string, ...)
{
	va_list	list;
	int		nbr;

	va_start(list, string);
	nbr = 0;
	if (!string || !string[0])
		return (0);
	while (*string)
	{
		if (*string == '%')
		{
			string++;
			if (!*string)
				return (nbr);
			check(*string, list, &nbr);
		}
		else
		{
			ft_putchar(*string, &nbr);
		}
		string++;
	}
	va_end(list);
	return (nbr);
}
