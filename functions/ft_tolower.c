/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clmirand <clmirand@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 11:03:25 by clmirand          #+#    #+#             */
/*   Updated: 2023/05/05 11:42:42 by clmirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Convierte un carácter a minúscula */

int	ft_tolower(int c) // La función toma como argumento un entero que representa un carácter ASCII
{
	if (c > 64 && c < 91) // Si el carácter es una letra mayúscula
		return (c + 32); // Se convierte a minúscula sumando 32 a su valor ASCII
	return (c); // Si no es una letra mayúscula, se retorna el carácter tal cual
}

/*
Se suma 32 porque es la diferencia constante entre el valor ASCII de una letra mayúscula y su correspondiente letra minúscula.

Otra forma similar de expresar la función es:
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
*/