/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnitu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:21:17 by lnitu             #+#    #+#             */
/*   Updated: 2023/02/01 10:05:05 by lnitu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*str;

	str = (void *)malloc(size * nitems);
	if (!str || (SIZE_MAX == size && SIZE_MAX == nitems))
		return (NULL);
	ft_bzero(str, size * nitems);
	return (str);
}
