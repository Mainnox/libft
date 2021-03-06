/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 11:01:11 by akremer           #+#    #+#             */
/*   Updated: 2019/03/19 08:40:53 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void		ft_putstr_fd(const char *s, int fd)
{
	if (!fd || !s)
		return ;
	while (*s)
		ft_putchar_fd(*s++, fd);
}
