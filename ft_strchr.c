/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonteli <amonteli@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 19:41:47 by amonteli          #+#    #+#             */
/*   Updated: 2020/02/17 01:03:38 by amonteli         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int		count;

	count = -1;
	while (s[++count])
		if (s[count] == c)
			return (char *)(s + count);
	if (s[count] == c)
		return (char *)(s + count);
	return (0);
}
