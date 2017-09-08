/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngbanza <marvin@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 18:12:18 by ngbanza           #+#    #+#             */
/*   Updated: 2017/05/29 13:03:08 by ngbanza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *str)
{
	int dest_len;
	int i;

	i = 0;
	dest_len = ft_strlen(dest);
	while (str[i] != '\0')
	{
		dest[dest_len + i] = str[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
