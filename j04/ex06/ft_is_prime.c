/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 22:03:52 by asantos           #+#    #+#             */
/*   Updated: 2017/08/17 11:03:06 by asantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int aux;

	aux = 2;
	if (nb <= 1)
		return(0);
	else
	{
		while (aux < nb)
		{
			if (nb % aux == 0)
			{
				aux = nb + 1;
				return (0);
			}
		aux++;
		}
		return (1);
	}
}

int main()
{
	printf("%i\n", ft_is_prime(4));
	return (0);
}
