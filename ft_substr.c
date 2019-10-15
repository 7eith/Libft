/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_substr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amonteli <amonteli@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/15 14:13:51 by amonteli     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/15 15:56:06 by amonteli    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	count;
	char	*tab;

	count = 0;
	tab = 0;
	if (!(tab = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	while (len > 0 && s[start + count] && ft_strlen(s) > start)
	{
		tab[count] = s[start + count];
		count++;
		len--;
	}
	tab[count] = '\0';
	return (tab);
}
