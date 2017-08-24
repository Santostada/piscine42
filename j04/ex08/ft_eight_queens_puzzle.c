/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 11:32:43 by asantos           #+#    #+#             */
/*   Updated: 2017/08/17 12:14:21 by asantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_eight_queens_puzzle(int n)
{
	if (n <= 92)
		return(ft_eight_queens_puzzle(n + 1));
}

int	ft_eight_queens_puzzle(void)
{
	return(ft_eight_queens_puzzle(1));
}
int main()
{
	printf ("%i", ft_eight_queens_puzzle());
	return (0);
}
