/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorynbay <aorynbay@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 18:15:24 by aorynbay          #+#    #+#             */
/*   Updated: 2024/05/01 18:20:17 by aorynbay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_char(char c)
{
	write(1, &c, 1);
}

void	print_comb(char a, char b, char c)
{
	print_char(a + '0');
	print_char(b + '0');
	print_char(c + '0');
	if (a == 7 && b == 8 && c == 9)
	{
		return ;
	}
	print_char(',');
	print_char(' ');
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				print_comb (a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
