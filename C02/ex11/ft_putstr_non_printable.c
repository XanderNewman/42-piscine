/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knieve-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 12:26:05 by knieve-l          #+#    #+#             */
/*   Updated: 2024/08/13 12:29:09 by knieve-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	char	*hex;
	int		index;

	index = 0;
	hex = "0123456789abcdef";
	while (str[index] != '\0')
	{
		if (str[index] >= 32 && str[index] <= 126)
		{
			ft_putchar(str[index]);
		}
		else
		{
			ft_putchar('\\');
			ft_putchar(hex[(unsigned char)str[index] / 16]);
			ft_putchar(hex[(unsigned char)str[index] % 16]);
		}
		index++;
	}
}
