/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memmove.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amonteli <amonteli@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/12 20:32:40 by amonteli     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/12 20:44:32 by amonteli    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	count;
	char	*source;
	char	*tmp;
	char	*d;

	count = 0;
	source = (char *)src;
	d = (char *)dest;
	tmp	= (char *)source;
	if (n == 0 || dest == 0)
		return ((void *)d);
	while (count < n)
	{
		d[count] = tmp[count];
		count++;
	}
	return ((void *)d);
}
