/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memccpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amonteli <amonteli@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/12 17:16:51 by amonteli     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/16 19:00:54 by amonteli    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			count;
	unsigned char	*source;
	unsigned char	*d;

	count = 0;
	source = (unsigned char *)src;
	d = (unsigned char *)dest;
	while (count < n && source[count])
	{
		d[count] = source[count];
		if (source[count] == (unsigned char)c)
			return (d + count + 1);
		count++;
	}
	return (0);
}
