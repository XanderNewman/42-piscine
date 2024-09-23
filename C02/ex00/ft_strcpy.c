/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knieve-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 10:09:25 by knieve-l          #+#    #+#             */
/*   Updated: 2024/08/15 12:23:36 by knieve-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//  #include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main()
{
	char src[] = "Hola";
	char dest[4];

	ft_strcpy(dest, src);	

	printf("%s", dest);
}
*/
