/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knieve-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 12:49:31 by knieve-l          #+#    #+#             */
/*   Updated: 2024/08/20 15:05:24 by knieve-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
/*
int main()
{
	printf("/0: %d\n", ft_sqrt(0));
	printf("/1: %d\n", ft_sqrt(1));
	printf("/2: %d\n", ft_sqrt(2));
	printf("/80586528: %d\n", ft_sqrt(80586528));
	printf("/55696: %d\n", ft_sqrt(55696));
}
*/
