/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstclear_bonus.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amonteli <amonteli@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/25 21:39:13 by amonteli     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/25 21:48:25 by amonteli    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*list;
	t_list	*first;

	if (!lst)
		return ;
	list = *lst;
	first = *lst;
	while (ft_lstlast(list))
	{
		(*del)((void *)ft_lstlast(list));
		free(ft_lstlast(list));
	}
	first->next = NULL;
}
