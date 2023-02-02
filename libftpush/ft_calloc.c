/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equadrin <equadrin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 18:59:44 by equadrin          #+#    #+#             */
/*   Updated: 2023/01/24 22:23:00 by equadrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	tot;
	void	*dst;

	if (size == SIZE_MAX && count == SIZE_MAX)
		return (NULL);
	tot = size * count;
	dst = malloc(tot);
	if (dst == NULL)
		return (0);
	ft_memset(dst, 0, tot);
	return (dst);
}
