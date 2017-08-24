/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 12:45:14 by asantos           #+#    #+#             */
/*   Updated: 2017/08/14 17:43:34 by asantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb > 1)
		return (nb * ft_recursive_factorial(nb -1));
	if (nb == 1 || nb == 0)
		return(1);
	else
		return (0);
}

int main()
{
	printf("%d\n", ft_recursive_factorial(5));
	return 0;
}
