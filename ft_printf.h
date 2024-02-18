/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 18:58:46 by bouhammo          #+#    #+#             */
/*   Updated: 2024/02/08 17:44:22 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *string, ...);
void	ft_putnbr(int n, int *nbr);
void	ft_putchar(char c, int *nbr);
void	ft_putstr(char *s, int *nbr);
void	ft_putnbr_long( unsigned int n, int *nbr);
void	ft_puthexa( unsigned int n, int *nbr );
void	ft_puthexadecimal( unsigned int n, int *nbr );
void	ft_putadr( unsigned long n, int *nbr );

#endif
