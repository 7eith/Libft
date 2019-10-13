/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnstr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amonteli <amonteli@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 18:44:30 by amonteli     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/14 01:42:40 by amonteli    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *search, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	if (search[0] == '\0')
		return ((char *)str);
	while (str[i] && i < len)
	{
		while (str[i + j] == search[j] && search[j] && i + j < len)
			j++;
		if (search[j] == '\0')
			return ((char *)&str[i]);
		i++;
		j = 0;
	}
	return (0);
}
