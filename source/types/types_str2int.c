/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types_str2int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancoulon <ancoulon@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 10:48:29 by ancoulon          #+#    #+#             */
/*   Updated: 2021/03/04 10:53:47 by ancoulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "carbon/types.h"

int		types_str2int(char *s)
{
	int				i;
	long int		nbr;
	int				sign;

	i = 0;
	nbr = 0;
	sign = 1;
	if (s[i] == '+')
		i++;
	else if (s[i] == '-' && s[i++])
		sign *= -1;
	while (s[i] && s[i] >= '0' && s[i] <= '9')
	{
		if (nbr < 0)
			return (sign > 0 ? -1 : 0);
		nbr = (nbr * 10) + (s[i] - '0');
		i++;
	}
	return (sign * nbr);
}
