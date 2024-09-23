/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knieve-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 10:39:59 by knieve-l          #+#    #+#             */
/*   Updated: 2024/08/14 17:41:15 by knieve-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	is_alphanumeric(char c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9')
	)
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	index;
	int	new_word;

	index = 0;
	new_word = 1;
	while (str[index] != '\0')
	{
		if (str[index] >= 'a' && str[index] <= 'z' && new_word)
		{
			str[index] = str[index] - ('a' - 'A');
			new_word = 0;
		}
		else if (str[index] >= 'A' && str[index] <= 'Z' && !new_word)
			str[index] = str[index] + ('a' - 'A');
		else if (!is_alphanumeric(str[index]))
			new_word = 1;
		else
			new_word = 0;
		index++;
	}
	return (str);
}

/*
int main()
{
        char str[] = "salut, comment tu vas ?
	42mots quarante-deux; cinquante+et+un";
        char str2[] = "Salut, Comment Tu Vas ?
	42MOTS quarAnte-deux; cInquante+et+un";
        ft_strcapitalize(str);
        ft_strcapitalize(str2);
        printf("%s", str);
        printf("\n");
        printf("%s", str2);
}
*/
