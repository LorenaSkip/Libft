/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnitu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 10:50:23 by lnitu             #+#    #+#             */
/*   Updated: 2023/02/06 11:46:11 by lnitu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	unsigned int	i;
	char			*output;

	i = 0;
	if (!s || !f)
		return (NULL);
	while (s[i] != 0)
		i++;
	output = malloc(sizeof(char) * (i + 1));
	if (!output)
		return (NULL);
	output[i] = '\0';
	i = 0;
	while (s[i] != 0)
	{
		output[i] = (*f)(i, s[i]);
		i++;
	}
	if (output == NULL)
		return (NULL);
	return (output);
}
