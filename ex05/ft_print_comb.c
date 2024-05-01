/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorynbay <aorynbay@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 16:57:06 by aorynbay          #+#    #+#             */
/*   Updated: 2024/05/01 17:18:52 by aorynbay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;
	char	comma_space[];

	a = 48;
	b = 48;
	c = 48;
	comma_space = ", ";
	while (c < 58 && a < 58 && b < 58)
	{
		c++;
		if (c == 58)
		{
			b++;
			c = 48;
		}
		if (b == 58)
		{
			a++;
			b = 48;
			c = 48;
		}
		if (a != b && a != c && b != c)
		{
			write(1, &a, 1);
			write(1, &b, 1);
			write(1, &c, 1);
			write(1, comma_space, 1);
		}
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
