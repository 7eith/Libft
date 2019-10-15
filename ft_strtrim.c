/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amonteli <amonteli@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/15 19:52:34 by amonteli     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/15 21:46:48 by amonteli    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_can_trim(char c, char const *set)
{
	int		count;

	count = -1;
	while (set[++count])
		if (set[count] == c)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		count;
	int		size;
	int		ssize;
	char	*tab;

	count = 0;
	size = ft_strlen(s1);
	ssize = ft_strlen(set);
	while (s1[count] && ssize < count && ft_can_trim(s1[count], set))
	{
		size--; // malloc
		count++; // skip
	}
}
