/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_split.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amonteli <amonteli@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/22 13:25:34 by amonteli     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/23 00:12:08 by amonteli    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count_words(char const *s, char c)
{
	int i;
	int words;
	int hasword;

	i = 0;
	words = 0;
	hasword = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] != c)
			hasword = 1;
		if (s[i] == c)
		{
			while (s[i] == c)
				i++;
			if (s[i])
				words++;
		}
		else
			i++;
	}
	return (words + hasword);
}

static	char	*ft_alloc_word(char const *s, char c)
{
	int		count;
	int		size;
	char	*tab;

	count = 0;
	size = 0;
	tab = 0;
	while (s[count] == c)
		count++;
	while (s[size] && s[size] != c)
		size++;
	if (!(tab = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	count = 0;
	while (count < size)
	{
		tab[count] = s[count];
		count++;
	}
	tab[count] = '\0';
	return (tab);
}

char			**ft_split(char const *s, char c)
{
	int		count;
	int		words;
	char	**tab;

	count = 0;
	if (!s)
		return (NULL);
	words = ft_count_words(s, c);
	if (!(tab = malloc(sizeof(char *) * (words + 1))))
		return (NULL);
	while (count < words)
	{
		while (s[0] == c)
			s++;
		if (!(tab[count] = ft_alloc_word(s, c)))
		{
			while (count > 0)
				free(tab[count]);
			return (NULL);
		}
		s += ft_strlen(tab[count]);
		count++;
	}
	tab[count] = 0;
	return (tab);
}