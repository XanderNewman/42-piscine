/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knieve-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 10:33:03 by knieve-l          #+#    #+#             */
/*   Updated: 2024/08/16 12:21:09 by knieve-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_str_is_printable(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str)
	{
		if (*str <= 32 || *str >= 126)
			return (0);
		str++;
	}
	return (1);
}

int main()
{
	printf("%d", ft_str_is_printable("hola\n"));
	printf("%d", ft_str_is_printable("hola"));
	printf("%d", ft_str_is_printable("\n"));
}
