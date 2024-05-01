/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorynbay <aorynbay@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 13:25:30 by aorynbay          #+#    #+#             */
/*   Updated: 2024/05/01 13:25:33 by aorynbay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	ch;

	ch = 'z';
	while (ch >= 'a')
	{
		write(1, &ch, 1);
		ch--;
	}
}
