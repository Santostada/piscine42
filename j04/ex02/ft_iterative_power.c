/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 17:53:29 by asantos           #+#    #+#             */
/*   Updated: 2017/08/14 21:55:24 by asantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{	
	int res;
	
	res = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return(1);
	while ((power - 2) >= 0)
	{
		res *= nb;
		power--;
		printf("%i\n", res);
	}
	return(res);
}

int main()
{
	printf("%i", ft_iterative_power(4, 2));
	return (0);
}
