/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equadrin <equadrin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:42:20 by equadrin          #+#    #+#             */
/*   Updated: 2023/02/02 17:37:20 by equadrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*str;
	char	*dest;
	size_t	i;

	if (!dst && !src)
		return (NULL);
	i = 0;
	str = (char *) src;
	dest = (char *) dst;
	while (i < n)
	{
		dest[i] = str[i];
		i++;
	}
	return (dst);
}
