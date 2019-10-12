/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memccpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amonteli <amonteli@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/12 17:16:51 by amonteli     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/12 20:00:06 by amonteli    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	count;
	char	*source;
	char	*d;

	count = 0;
	source = (char *)src;
	d = (char *)dest;
	while (count < n)
	{
		d[count] = source[count];
		if (source[count] == c)
			return (d + count + 1);
		count++;
	}
	return (0);
}
