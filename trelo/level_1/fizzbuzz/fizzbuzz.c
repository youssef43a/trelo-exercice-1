/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youennaj <youennaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 11:25:07 by youennaj          #+#    #+#             */
/*   Updated: 2024/07/17 11:38:47 by youennaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int i)
{
	char c;
	if (i == -2147483648)
		write(1, "-2147483648", 11);
	if (i < 0)
	{
		write(1, "-", 1);
		i *= -1;
	}
	if (i > 10)
		ft_putnbr(i / 10);
	c = i % 10 + '0';
	write(1, &c, 1);
}

int main()
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else
			ft_putnbr(i);
		write(1, "\n", 1);
		i++;
	}
}
