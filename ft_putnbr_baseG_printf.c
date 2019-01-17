/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_baseG_printf.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 10:19:11 by akremer           #+#    #+#             */
/*   Updated: 2019/01/17 11:33:25 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void		ft_putnbr_baseG_printf(va_list ap, int base, t_printf *using)
{
	if (using->extra->hashtag == 1)
		ft_putchar_puissant("0X");
	if (using->extra->size == 1)
		ft_set_baseG_1(ap, using, base);
	else if (using->extra->size == 2)
		ft_set_baseG_2(ap, using, base);
	else if (using->extra->size == 3)
		ft_set_baseG_3(ap, using, base);
	else if (using->extra->size == 4)
		ft_set_baseG_4(ap, using, base);
	else
		ft_set_baseG_0(ap, using, base);
	using->index++;
}
