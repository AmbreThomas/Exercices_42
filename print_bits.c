/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 11:33:22 by athomas           #+#    #+#             */
/*   Updated: 2016/07/28 11:52:34 by athomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_bits(unsigned char x)
{
	int i;

	i = 8 * sizeof(x) - 1;
	while (i >= 0)
	{
		if (i < 8)
			(x & (1 << i)) ? ft_putchar('1') : ft_putchar('0');
		i--;
	}
	ft_putchar('\n');
}

int		main(void)
{
	print_bits('A');
	return (0);
}
