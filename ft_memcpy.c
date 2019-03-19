/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 13:43:16 by akremer           #+#    #+#             */
/*   Updated: 2019/03/19 08:39:21 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*ndest;
	const char	*nsrc;

	ndest = (char*)dest;
	nsrc = (const char*)src;
	if (n == 0 || ndest == nsrc)
		return (dest);
	while (n--)
		*ndest++ = *nsrc++;
	return (dest);
}
