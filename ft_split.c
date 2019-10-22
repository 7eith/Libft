/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_split.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amonteli <amonteli@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/22 13:25:34 by amonteli     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/22 20:27:10 by amonteli    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int    ft_count_words(char const *s, char c)
{
    int i;
    int res;
    int ok;

    i = 0;
    res = 0;
    ok = 0;
    while (s[i] == c)
        i++;
    while (s[i])
    {
        if (s[i] != c)
            ok = 1;
        if (s[i] == c)
        {
            while (s[i] == c)
                i++;
            if (s[i])
                res++;
        }
        else
            i++;
    }
    return (res + ok);
}

// int		ft_count_words(char const *s, char sep)
// {
// 	int		count;
// 	int		words;

// 	count = 0;
// 	words = 0;
// 	while (s[count] == sep)
// 		count++;
// 	words = 1;
// 	while (s[count++])
// 		if (s[count] == sep && s[count + 1] != sep)
// 			words++;
// 	return (words);
// }

char	*ft_alloc_word(char const *s, char c)
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
	// printf("[Debug]Allocation Size=%d\n", size);
	if (!(tab = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	count = 0;
	while (count < size)
	{
		// printf("[Debug]Copying=%c\n", s[count]);
		tab[count] = s[count];
		count++;
	}
	tab[count] = '\0';
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	int		count;
	int		words;
	char	**tab;

	count = 0;
	words = ft_count_words(s, c);
	// printf("[Debug]Words: %d\n", words);
	tab = 0;
	if (!(tab = malloc(sizeof(char *) * (words + 1))))
		return (NULL);
	while (count < words)
	{
		while (s[0] == c)
		{
			s++;
			// printf("[Debug]Found char %c\n", c);
		}
		// printf("[Debug]Allocating word: %d\n", count);
		tab[count] = ft_alloc_word(s, c);
		// printf("[Debug]Copied word=%s\n\n", tab[count]);
		// printf("[Debug]Returned copied size=%zu\n\n", ft_strlen(tab[count]));
		s += ft_strlen(tab[count]);
		count++;
	}
	tab[count] = 0;
	return (tab);
}

int		main(void)
{
	int	i;
	char **res;
	char	*str_test = " bonjour     a     tous    slt";

	printf("Chaine: '%s',\nSeparateur: ' ',\nResultat:\n", str_test);
	res = ft_split(str_test, ' ');
	i = 0;
	while (res[i])
	{
		printf("'%s'\n", res[i]);
		i++;
	}
	// printf("Chaine s : ' bonjour a tous ', separateur c : ' ', resultat :\n");
	// res = ft_split(" bonjour a tous ", ' ');
	// i = 0;
	// while (res[i])
	// {
	// 	printf("'%s'\n", res[i]);
	// 	i++;
	// }
	// printf("Chaine s : '   ', separateur c : ' ', resultat :\n");
	// res = ft_split("   ", ' ');
	// i = 0;
	// while (res[i])
	// {
	// 	printf("'%s'\n", res[i]);
	// 	i++;
	// }
	// printf("Chaine s : ' d  ', separateur c : ' ', resultat :\n");
	// res = ft_split(" d  ", ' ');
	// i = 0;
	// while (res[i])
	// {
	// 	printf("'%s'\n", res[i]);
	// 	i++;
	// }
	// printf("Chaine s : 'nosep', separateur c : ' ', resultat :\n");
	// res = ft_split("nosep", ' ');
	// i = 0;
	// while (res[i])
	// {
	// 	printf("'%s'\n", res[i]);
	// 	i++;
	// }

}
