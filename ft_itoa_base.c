/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngbanza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/05 11:54:03 by ngbanza           #+#    #+#             */
/*   Updated: 2017/09/05 11:56:11 by ngbanza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char			*real_man_hardcode(long long n, int base)
{
	if ((n <= -9223372036854775807) && base == 10)
		return (ft_strdup("-9223372036854775808"));
	if ((n <= -9223372036854775807) && base == 16)
		return (ft_strdup("800000000000000"));
	if ((n <= -9223372036854775807) && base == 8)
		return (ft_strdup("1000000000000000000000"));
	return ("0");
}

char				*ft_itoa_base(long long n, int base)
{
	char			*ret;
	int				s;
	int				i;

	i = len_base(n, base);
	s = 0;
	if (n <= -9223372036854775807)
		return ((real_man_hardcode(n, base)));
	ret = (char *)malloc(sizeof(char) * (i + 1));
	ret[i--] = '\0';
	if (n < 0)
	{
		n = -n;
		(base == 10) ? s = 1 : 0;
	}
	ret[i--] = (n % base < 10) ? (n % base) + 48 : (n % base) + 87;
	n /= base;
	while (i >= 0)
	{
		if (i == 0 && s == 1)
			ret[i--] = '-';
		ret[i--] = (n % base < 10) ? (n % base) + 48 : (n % base) + 87;
		n /= base;
	}
	return (ret);
}
