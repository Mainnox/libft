/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_puissant.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 17:24:38 by akremer           #+#    #+#             */
/*   Updated: 2019/01/07 12:37:22 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void			ft_putchar_puissant_printf(const char *str, t_printf *using)
{
	using->nbprint += ft_strlen(using->str) - 2;
	write(1, str, ft_strlen(str));
	using->index++;
}
