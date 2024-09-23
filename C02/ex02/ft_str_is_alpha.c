/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knieve-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 10:19:15 by knieve-l          #+#    #+#             */
/*   Updated: 2024/08/14 12:11:51 by knieve-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str)
	{
		if (!(*str >= 'a' && *str <= 'z') && !(*str >= 'A' && *str <= 'Z'))
			return (0);
		str++;
	}
	return (1);
}
/*
int main(void)
{
	int res = ft_str_is_alpha("123");
	int res2 = ft_str_is_alpha("123iasd");
	int res3 = ft_str_is_alpha("iasd");
	int res4 = ft_str_is_alpha("");

	printf("%d", res);
	printf("%d", res2);
	printf("%d", res3);
	printf("%d", res4);
}
*/
