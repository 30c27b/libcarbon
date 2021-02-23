/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem_calloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancoulon <ancoulon@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 16:14:01 by ancoulon          #+#    #+#             */
/*   Updated: 2021/02/06 16:17:11 by ancoulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "moly/mem.h"

void*
	mem_calloc(size_t size)
{
	return (mem_setalloc(size, 0b00000000));
}