/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knieve-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 11:34:59 by knieve-l          #+#    #+#             */
/*   Updated: 2024/08/20 15:02:18 by knieve-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
int main()
{
	printf("index 12: %d\n", ft_fibonacci(12));
	printf("index 17: %d\n", ft_fibonacci(17));
	printf("index -1: %d\n", ft_fibonacci(-1));
	printf("index 0: %d\n", ft_fibonacci(0));
}
*/
