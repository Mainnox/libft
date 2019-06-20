/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 13:39:19 by akremer           #+#    #+#             */
/*   Updated: 2019/05/20 11:18:21 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void		ft_bzero(void *s, size_t n)
{
	size_t	i;
	int		*ns;

	ns = (int*)s;
	i = -1;
	while (++i < n)
		ns[i] = 0;
}