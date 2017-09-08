/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngbanza <marvin@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 11:51:00 by ngbanza           #+#    #+#             */
/*   Updated: 2017/05/29 16:23:56 by ngbanza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	int		len;
	char	*dest;

	len = ft_strlen(src);
	i = -1;
	if (!(dest = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (src[++i] != '\0')
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
