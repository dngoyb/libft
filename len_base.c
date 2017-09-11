/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   len_base.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngbanza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/05 11:58:43 by ngbanza           #+#    #+#             */
/*   Updated: 2017/09/05 12:00:23 by ngbanza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					len_base(long long nb, int base)
{
	int				len;

	len = 0;
	if (nb < 0)
	{
		nb = -nb;
		if (base == 10)
			len++;
	}
	len++;
	nb /= base;
	while (nb)
	{
		len++;
		nb /= base;
	}
	return (len);
}
