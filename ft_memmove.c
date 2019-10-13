/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memmove.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amonteli <amonteli@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/12 20:32:40 by amonteli     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/13 18:39:35 by amonteli    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdio.h>

void	*ft_memmove(void *dest, const void *source, size_t n)
{
	size_t	count;
	char	*src;
	char	*dst;
	char	tmp[n];

	count = 0;
	src = (char *)source;
	dst = dest;
	while (count < n)
	{
		tmp[count] = src[count];
		count++;
	}
	count = 0;
	while (count < n)
	{
		dst[count] = tmp[count];
		count++;
	}
	return (dst);
}
