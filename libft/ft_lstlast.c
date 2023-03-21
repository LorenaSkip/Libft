/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnitu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:28:21 by lnitu             #+#    #+#             */
/*   Updated: 2023/02/02 11:30:10 by lnitu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*currelem;

	currelem = lst;
	if (currelem == NULL)
		return (NULL);
	while (currelem->next != NULL)
		currelem = currelem->next;
	return (currelem);
}
