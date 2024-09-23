/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knieve-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 10:31:20 by knieve-l          #+#    #+#             */
/*   Updated: 2024/08/24 13:56:18 by knieve-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		length;
	char	*copy;

	length = 0;
	i = 0;
	while (src[length])
		length++;
	copy = malloc(length + 1);
	if (copy == NULL)
		return (NULL);
	while (i <= length)
	{
		copy[i] = src[i];
		i++;
	}
	return (copy);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

t_stock_str	*create_stock_str(char *str)
{
	t_stock_str	*s;

	s = malloc(sizeof(t_stock_str));
	if (s == NULL)
		return (NULL);
	s->size = ft_strlen(str);
	s->str = ft_strdup(str);
	if (s->str == NULL)
	{
		free(s);
		return (NULL);
	}
	s->copy = ft_strdup(str);
	if (s->copy == NULL)
	{
		free(s->str);
		free(s);
		return (NULL);
	}
	return (s);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*arr;
	int			i;

	i = 0;
	arr = malloc((ac + 1) * sizeof(t_stock_str));
	if (arr == NULL)
		return (NULL);
	while (i < ac)
	{
		arr[i] = *create_stock_str(av[i]);
		if (arr[i].str == NULL)
		{
			while (i > 0)
			{
				free(arr[--i].str);
				free(arr[i].copy);
			}
			free(arr);
			return (NULL);
		}
		i++;
	}
	arr[ac].str = NULL;
	return (arr);
}
