/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonteli <amonteli@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/03 17:07:28 by amonteli          #+#    #+#             */
/*   Updated: 2020/02/17 01:03:17 by amonteli         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int			ft_numlen(int n)
{
	long long int	count;
	long long int	number;

	number = (long long int)n;
	count = 1;
	if (number < 0)
		number *= -1;
	while (number > 9)
	{
		number /= 10;
		count++;
	}
	return (count);
}
