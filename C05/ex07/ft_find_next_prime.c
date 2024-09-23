/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knieve-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 13:26:51 by knieve-l          #+#    #+#             */
/*   Updated: 2024/08/20 15:39:52 by knieve-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 0 || nb == 1)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;
	int	num;

	i = 1;
	num = nb;
	while (!ft_is_prime(num))
		num++;
	return (num);
}
/*
int main()
{
	printf("0 -> 2: %d\n", ft_find_next_prime(0));
	printf("4 -> 5: %d\n", ft_find_next_prime(4));
	printf("6 -> 7: %d\n", ft_find_next_prime(6));
	printf("30 -> 31: %d\n", ft_find_next_prime(30));
	printf("28 -> 29: %d\n", ft_find_next_prime(28));
}
*/
