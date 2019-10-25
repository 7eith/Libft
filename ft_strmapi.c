/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strmapi.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amonteli <amonteli@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/24 17:53:24 by amonteli     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/25 14:11:36 by amonteli    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		count;
	char	*tab;

	count = 0;
	tab = 0;
	if (!s)
		return (NULL);
	if (!(tab = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	while (s[count])
	{
		tab[count] = (*f)(count, s[count]);
		count++;
	}
	tab[count] = '\0';
	return (tab);
}
