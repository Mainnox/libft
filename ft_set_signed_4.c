/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_signed_4.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 09:09:49 by akremer           #+#    #+#             */
/*   Updated: 2019/01/17 13:32:19 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

static void	ft_display(long long nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
		ft_display(nb / 10);
	ft_putchar(nb % 10 + 48);
}

void		ft_set_signed_4(va_list ap, t_printf *using)
{
	long long 	nb;
	char		signe;

	signe = 0;
	nb = va_arg(ap, long long);
	if (nb < 0)
		signe = 1;
	if (using->extra->zero)
	{
		using->extra->zero -= signe - ft_nbrlen((unsigned long long)nb, signe);
		while (using->extra->zero < 0)
		{
			ft_putchar('0');
			using->extra->zero--;
		}
	}
	ft_display(nb);
	using->nbprint += ft_nbrlen((unsigned long long)nb, signe);
}
