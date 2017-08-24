/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 21:38:22 by asantos           #+#    #+#             */
/*   Updated: 2017/08/14 22:28:16 by asantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power  > 0)
	{
		printf("%i\n", nb);
		return(nb * (ft_recursive_power(nb, (power - 1))));
	}
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
}

int main()
{
	printf("%i", ft_recursive_power(7, 7));
	return (0);
}
