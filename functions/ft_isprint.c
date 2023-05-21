/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clmirand <clmirand@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 10:03:25 by clmirand          #+#    #+#             */
/*   Updated: 2023/04/15 10:42:42 by clmirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Esta función comprueba si el parámetro corresponde a un carácter imprimible.
Los caracteres imprimibles son  los dígitos, letras, puntuación, espacios en blanco y otros caracteres visibles en la tabla ASCII. Los caracteres de control no se consideran imprimibles */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126) // Los caracteres imprimibles del código ASCII van del 32 (espacio) al 126 (~)
		return (1);
	return (0);
}

/*
Como la función sólo retorna un booleano, no es necesario usar if para comprobar si devuelve explícitamente 1 o 0:
int	ft_isprint(int c) {
	return (c >= 32 && c <= 126);
}
*/