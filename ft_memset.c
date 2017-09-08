/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngbanza <marvin@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/25 08:14:28 by ngbanza           #+#    #+#             */
/*   Updated: 2017/05/31 15:29:21 by ngbanza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*temp;

	temp = (char *)s;
	i = 0;
	while (i < n)
	{
		temp[i] = (unsigned char)c;
		i++;
	}
	s = temp;
	return ((void *)s);
}
