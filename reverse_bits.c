/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 11:55:57 by athomas           #+#    #+#             */
/*   Updated: 2016/07/28 12:08:42 by athomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int reverse_bits(unsigned int num)
{
	unsigned int  count;
	unsigned int reverse_num;
	int		i;

	count = sizeof(num) * 8;
	reverse_num = 0;
	i = 0;
	while (i < count)
	{
		if ((num & (1 << i)))
			reverse_num |= 1 << ((count - 1) -i);
		i++;
	}
	return (reverse_num);
}

int		main(void)
{
	unsigned int x = 3;
	printf("%u\n", reverse_bits(x));
	return (0);
}
