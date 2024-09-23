/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knieve-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 10:21:18 by knieve-l          #+#    #+#             */
/*   Updated: 2024/08/14 12:12:22 by knieve-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}
/*
int main()
{
	int res = ft_str_is_numeric("123");
        int res2 = ft_str_is_numeric("123iasd");
        int res3 = ft_str_is_numeric("iasd");
        int res4 = ft_str_is_numeric("");

        printf("%d", res);
        printf("%d", res2);
        printf("%d", res3);
        printf("%d", res4);	
}
*/
