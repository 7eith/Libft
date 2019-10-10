/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_bzero.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amonteli <amonteli@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/10 18:36:28 by amonteli     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/10 18:38:45 by amonteli    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <string.h>

void	bzero(void *s, size_t n)
{
	size_t			count;
	unsigned char	*str;

	count = 0;
	str = s;
	while (count < n)
	{
		str[count] = '\0';
		count++;
	}
}
