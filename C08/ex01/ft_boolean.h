/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knieve-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 09:56:37 by knieve-l          #+#    #+#             */
/*   Updated: 2024/08/25 16:21:37 by knieve-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# include <stdbool.h>
# include <unistd.h>

typedef bool	t_bool;

# define TRUE 1
# define FALSE 0

# define EVEN(nbr) (nbr % 2 == 0)

# define EVEN_MSG  "I have an even number of arguments.\n"
# define ODD_MSG  "I have an odd number of arguments.\n" 

# define SUCCESS FALSE
#endif
