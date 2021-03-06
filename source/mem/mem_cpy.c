/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem_cpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancoulon <ancoulon@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 14:18:13 by ancoulon          #+#    #+#             */
/*   Updated: 2021/03/08 10:27:33 by ancoulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "carbon/mem.h"

void	*mem_cpy(void *d, void *s, size_t n)
{
	size_t	i;

	if (d && s)
	{
		i = 0;
		while (i < n)
		{
			((uint8_t *)d)[i] = ((uint8_t *)s)[i];
			i++;
		}
	}
	return (d);
}
