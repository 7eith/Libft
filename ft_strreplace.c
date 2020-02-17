/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strreplace.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonteli <amonteli@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 15:34:29 by amonteli          #+#    #+#             */
/*   Updated: 2020/02/17 01:04:16 by amonteli         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strreplace(const char *str, char *target, char *substitute)
{
	size_t		count;
	size_t		size;
	char		*replaced;
	char		*temp;

	count = 0;
	if (!str)
		return (NULL);
	if (!ft_strnstr(str, target, ft_strlen(str)) || !substitute)
		return ((char *)str);
	size = ft_strlen(str) + ft_strlen(substitute) - ft_strlen(target);
	if (!(replaced = ft_calloc(size, sizeof(char))))
		return (NULL);
	size = (int)ft_strnstr(str, target, ft_strlen(str)) - (int)str;
	ft_strncpy(replaced, (char *)str, size);
	temp = ft_strjoin(replaced, substitute);
	free(replaced);
	replaced = temp;
	return (replaced);
}
