/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 18:59:54 by bouhammo          #+#    #+#             */
/*   Updated: 2024/01/13 18:59:55 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *s, int *nbr)
{
	int	i;

	if (s == NULL)
	{
		ft_putstr("(null)", nbr);
		return ;
	}
	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar(s[i], nbr);
		i++;
	}
}
