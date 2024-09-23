/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knieve-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 12:35:15 by knieve-l          #+#    #+#             */
/*   Updated: 2024/08/19 10:46:46 by knieve-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int main()
{
	char a = 'a';
	char b = 'b';

	int result = ft_strcmp(&a, &b);
	int result1 = ft_strcmp(&a, &a);
	int result2 = ft_strcmp(&b, &a);
	printf("%d", result);
	printf("%d", result1);
	printf("%d", result2);
}
*/
