/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_alphabet.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 14:51:00 by asantos           #+#    #+#             */
/*   Updated: 2017/08/03 16:42:48 by asantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_putchar(char c);

void ft_print_alphabet(void);
{
	int letter;

	letter = 'a';
	while( letter <= 'z')
	{
		ft_putchar (letter);
		letter++;
	}
}
