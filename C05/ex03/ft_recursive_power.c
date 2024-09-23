/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knieve-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 11:12:44 by knieve-l          #+#    #+#             */
/*   Updated: 2024/08/20 17:09:09 by knieve-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	if (power == 1)
		return (nb);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
int main()
{
printf("32^0: %d\n",ft_recursive_power(32, 0));
printf("0^0: %d\n",ft_recursive_power(0, 0));
printf("0^2: %d\n",ft_recursive_power(0, 2));
printf("5^2: %d\n",ft_recursive_power(5, 2));
printf("5^3: %d\n",ft_recursive_power(5, 3));
printf("5^4: %d\n",ft_recursive_power(5, 4));
}
*/
