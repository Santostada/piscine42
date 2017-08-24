/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 19:57:56 by asantos           #+#    #+#             */
/*   Updated: 2017/08/14 20:43:23 by asantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int c;
	
	c = (nb -1);
	if (nb < 0)
		return (0);
	if (nb == 0)
		nb = 1;
	while(c >= 1)
	{	
		nb *= c;
		c--;
	}
	return(nb);
}

int main()
{
	printf("%i", ft_iterative_factorial(13));
	return (0);
}
