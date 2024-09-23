/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knieve-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 10:00:25 by knieve-l          #+#    #+#             */
/*   Updated: 2024/08/23 11:27:30 by knieve-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	*arr;
	int	i;

	if (min >= max)
		return (NULL);
	len = max - min;
	arr = malloc(len * sizeof(int));
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
/*
int main()
{
	int *result;
	int i;
	int len;

	int min = 1;
	int max = 10;
	result = ft_range(min, max);
	len = max - min;
	if(result)
	{
		printf("Test passed: range [%d, %d)\n", min, max);
		for (i = 0; i < len; i++)
			printf("%d ", result[i]);
		printf("\n");
		free(result);
	}
}
*/
