/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncmp.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amonteli <amonteli@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 16:36:10 by amonteli     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/09 16:38:18 by amonteli    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <string.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	if (n != 0)
		while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
			i++;
	else
		return (0);
	return (s1[i] - s2[i]);
}