/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clmirand <clmirand@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 11:42:42 by clmirand          #+#    #+#             */
/*   Updated: 2023/03/24 20:35:27 by clmirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_isascii comprueba si el parámetro c es un carácter válido de la tabla ASCII o no, siendo el rango válido de 0 (NULL) a 127 (octal 0177 DELete) */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*
La versión más optimizada de esta función es
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
*/