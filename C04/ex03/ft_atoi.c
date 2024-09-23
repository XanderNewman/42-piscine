/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knieve-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 18:46:45 by knieve-l          #+#    #+#             */
/*   Updated: 2024/08/27 15:19:33 by knieve-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h> 

int	ft_atoi(char *str)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while ((*str == ' ') || (*str == '\t') || (*str == '\n')
		|| (*str == '\v') || (*str == '\f') || (*str == '\r'))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (sign * result);
}
/*
int	main(void)
{
	// Test 1: Basic positive number
	printf("Test 1: \"%s\" -> %d\n", "1234", ft_atoi("1234"));

	// Test 2: Basic negative number
	printf("Test 2: \"%s\" -> %d\n", "-1234", ft_atoi("-1234"));

	// Test 3: Number with leading spaces
	printf("Test 3: \"%s\" -> %d\n", "   5678", ft_atoi("   5678"));

	// Test 4: Number with leading '+' sign
	printf("Test 4: \"%s\" -> %d\n", "+9012", ft_atoi("+9012"));

	// Test 5: Number with multiple '+' signs
	printf("Test 5: \"%s\" -> %d\n", "+++123", ft_atoi("+++123"));

	// Test 6: Number with multiple '-' signs
	printf("Test 6: \"%s\" -> %d\n", "--123", ft_atoi("--123"));

	// Test 7: Mixed '+' and '-' signs
	printf("Test 7: \"%s\" -> %d\n", "+-+-123", ft_atoi("+-+-123"));

	// Test 8: Number followed by letters
	printf("Test 8: \"%s\" -> %d\n", "42abc", ft_atoi("42abc"));

	// Test 9: Letters before the number
	printf("Test 9: \"%s\" -> %d\n", "abc123", ft_atoi("abc123"));

	// Test 10: Number with no digits
	printf("Test 10: \"%s\" -> %d\n", "", ft_atoi(""));

	// Test 11: All spaces
	printf("Test 11: \"%s\" -> %d\n", "     ", ft_atoi("     "));

	return (0);
}
*/
