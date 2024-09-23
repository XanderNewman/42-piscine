/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knieve-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 12:43:29 by knieve-l          #+#    #+#             */
/*   Updated: 2024/08/20 18:25:54 by knieve-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0' && (str[i + j] == to_find[j]))
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	*result;

	// Test 1: Normal case - substring found at the beginning
	result = ft_strstr("hello world", "hello");
	if (result)
		printf("Test 1 Passed: %s\n", result);
	else
		printf("Test 1 Failed: Substring not found\n");

	// Test 2: Normal case - substring found in the middle
	result = ft_strstr("hello world", "world");
	if (result)
		printf("Test 2 Passed: %s\n", result);
	else
		printf("Test 2 Failed: Substring not found\n");

	// Test 3: Substring is not found
	result = ft_strstr("hello world", "42");
	if (result)
		printf("Test 3 Failed: Unexpected match found: %s\n", result);
	else
		printf("Test 3 Passed: Substring not found\n");

	// Test 4: Empty substring (should return the full string)
	result = ft_strstr("hello world", "");
	if (result)
		printf("Test 4 Passed: %s\n", result);
	else
		printf("Test 4 Failed: Substring not found\n");

	// Test 5: Substring "ola" in "holeholaholi"
	result = ft_strstr("holeholaholi", "ola");
	if (result)
		printf("Test 5 Passed: %s\n", result);
	else
		printf("Test 5 Failed: Substring not found\n");

	return (0);
}
*/
