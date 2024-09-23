/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knieve-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 10:17:01 by knieve-l          #+#    #+#             */
/*   Updated: 2024/08/14 12:21:20 by knieve-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//  #include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int main()
{
	char src[] = "Hola";
	char dest[10];

	ft_strncpy(dest, src, 10);

	printf("%s", dest);
}
*/
