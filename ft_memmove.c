/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonteli <amonteli@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 20:32:40 by amonteli          #+#    #+#             */
/*   Updated: 2020/02/17 01:03:13 by amonteli         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*source;
	char	*dst;

	source = (char *)src;
	dst = dest;
	if (!source && !dst)
		return (NULL);
	if (dst < source)
		return (ft_memcpy(dst, source, n));
	n++;
	while (--n)
		dst[n - 1] = source[n - 1];
	return (dst);
}
