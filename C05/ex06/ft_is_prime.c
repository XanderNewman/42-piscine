/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knieve-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 13:13:31 by knieve-l          #+#    #+#             */
/*   Updated: 2024/08/20 17:08:27 by knieve-l         ###   ########.fr       */
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
/*
int main()
{
	printf("2: %d\n", ft_is_prime(2));
	printf("3: %d\n", ft_is_prime(3));
	printf("5: %d\n", ft_is_prime(5));
	printf("7: %d\n", ft_is_prime(7));
	printf("29: %d\n", ft_is_prime(29));
	printf("\n--------------\n");
	printf("0: %d\n", ft_is_prime(0));
	printf("1: %d\n", ft_is_prime(1));
	printf("4: %d\n", ft_is_prime(4));
	printf("6: %d\n", ft_is_prime(6));
	printf("8: %d\n", ft_is_prime(8));
	printf("21: %d\n", ft_is_prime(21));
	printf("77: %d\n", ft_is_prime(77));
}
*/
