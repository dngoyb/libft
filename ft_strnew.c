/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngbanza <marvin@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/25 15:13:39 by ngbanza           #+#    #+#             */
/*   Updated: 2017/05/29 12:47:01 by ngbanza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *ptr;

	if (!(ptr = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	ptr = (char *)ft_memset(ptr, '\0', (size + 1));
	return (ptr);
}
