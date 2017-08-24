/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 20:37:55 by asantos           #+#    #+#             */
/*   Updated: 2017/08/15 22:01:00 by asantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_sqrt(int nb)
{
	int c;
	
	while (c * c < nb)
	{	
		c++;
		if (c * c == nb)
			return(c); //add double sqrt
	}
	return (0);
}

int main()
{
	printf("%i", ft_sqrt(1));
	return (0);
}
