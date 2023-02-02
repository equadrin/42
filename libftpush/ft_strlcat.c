/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equadrin <equadrin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 17:36:52 by lmorelli          #+#    #+#             */
/*   Updated: 2023/02/02 17:25:08 by equadrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	dstlen;

	if (!src && !dest)
		return (0);
	if (size == 0)
		return (ft_strlen(src));
	dstlen = ft_strlen(dest);
	if (size <= dstlen)
		return (ft_strlen(src) + size);
	ft_strlcpy((dest + dstlen), src, (size - dstlen));
	return (dstlen + ft_strlen(src));
}
