/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonteli <amonteli@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 13:56:35 by amonteli          #+#    #+#             */
/*   Updated: 2020/02/17 01:03:10 by amonteli         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	count;
	char	*source;
	char	*d;

	count = -1;
	source = (char *)src;
	d = (char *)dest;
	if (!src && !dest)
		return (0);
	while (++count < n)
		d[count] = source[count];
	return (d);
}
