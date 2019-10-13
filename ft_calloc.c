/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_calloc.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amonteli <amonteli@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/13 20:49:48 by amonteli     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/13 21:17:40 by amonteli    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	count;
	char	*tab;

	count = -1;
	if (!(tab = (char *)malloc(nmemb * size)))
		return (NULL);
	while (++count < nmemb)
		tab[count] = 0;
	return ((void *)tab);
}
