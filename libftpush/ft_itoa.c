/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equadrin <equadrin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 17:23:42 by equadrin          #+#    #+#             */
/*   Updated: 2023/02/02 17:32:03 by equadrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	lenght_string(int n)
{
	long int	number;
	int			len;

	number = n;
	len = 1;
	if (number < 0)
	{
		len++;
		number = -number;
	}
	while (number >= 10)
	{
		number = number / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*stringa;
	long int	number;
	long int	len;

	len = lenght_string(n);
	number = n;
	stringa = (char *)malloc(len + 1);
	if (!stringa)
		return (NULL);
	if (number < 0)
	{
		number = -number;
		*stringa = '-';
	}
	stringa[len] = '\0';
	len--;
	while (number >= 10)
	{
		stringa[len] = 48 + (number % 10);
		number /= 10;
		len--;
	}
	if (number >= 0 && number < 10)
		stringa[len] = 48 + (number % 10);
	return (stringa);
}
