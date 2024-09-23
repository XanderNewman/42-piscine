/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knieve-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 10:52:51 by knieve-l          #+#    #+#             */
/*   Updated: 2024/08/29 12:06:24 by knieve-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 1;
	result = nb;
	if (power < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb == 0 && power == 0)
		return (1);
	while (i < power)
	{
		result = result * nb;
		i++;
	}
	return (result);
}
/*
int main()
{
	printf("1^2: %d\n",ft_iterative_power(1, 2));
	printf("0^0: %d\n",ft_iterative_power(0, 0));
	printf("0^2: %d\n",ft_iterative_power(0, 2));
	printf("5^2: %d\n",ft_iterative_power(5, 2));
	printf("5^3: %d\n",ft_iterative_power(5, 3));
	printf("5^4: %d\n",ft_iterative_power(5, 4));
}
*/
