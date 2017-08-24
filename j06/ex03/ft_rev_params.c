/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 12:12:41 by asantos           #+#    #+#             */
/*   Updated: 2017/08/23 15:31:00 by asantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_shit(char *s1)
{
	int i;

	i = 0;
	while (s1[i] != '\0')
	{
		ft_putchar(s1[i]);
		i++;
	}
}
int		main(int argc, char **argv)
{
	int x;

	x = argc - 1;
	while (x > 0)
	{
		ft_print_shit(argv[x]);
		ft_putchar('\n');
		x--;
	}
	return (0);
}
