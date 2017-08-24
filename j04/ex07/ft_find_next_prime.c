/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 14:41:00 by asantos           #+#    #+#             */
/*   Updated: 2017/08/17 11:23:16 by asantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
/*
int	check_prime(int num);

int	ft_is_prime(int nb)
{
	if (check_prime(nb) == 1)
		return (nb);
	else
	{
		check_prime(nb + 1);
		write(1, "no", 2);
	}
}*/

int	check_prime(int num)
{
	int aux;
//PONER NOMBRE FUNCIONES BIEN
	aux = 2;
	if (num <=	 1)
		return (2);
	else
	{
		while (aux < num)
		{
			if (num % aux == 0)
				return(check_prime(num + 1));
			aux++;
		}
		return(num);
	}
}

int main()
{
	printf("%i", check_prime(2147483655));
	return (0);
}
