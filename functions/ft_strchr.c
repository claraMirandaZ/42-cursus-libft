/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clmirand <clmirand@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 16:03:25 by clmirand          #+#    #+#             */
/*   Updated: 2023/05/05 16:42:42 by clmirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
La función busca la primera aparición del carácter c en la cadena str y devuelve un puntero al carácter encontrado. Si el carácter no se encuentra, devuelve un puntero nulo. El parámetro c se convierte en un valor entero de tipo char antes de ser comparado.
*/

char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0' && *str != (char)c) // El bucle se ejecuta mientras no se llegue al final de la cadena y no se encuentre el carácter c
	{
		str++; // Se avanza el puntero a la siguiente posición de la cadena
	}
	if (*str == (char)c) // Si se encuentra el carácter, se devuelve un puntero al mismo
		return ((char *) str);
	else
		return (NULL); // Si no, se devuelve un puntero nulo
}

/*
Otra forma de enfocar la función:
char	*ft_strchr(const char *str, int c)
{
	char	x; // Se declara x como una variable de tipo char

	x = c; // Se asigna el valor del carácter c a la variable x

	while (*str) // Mientras exista el puntero a la cadena
	{
		if (*str == x) // Si el carácter actual de str es igual a x
		{
			return ((char *) str); // Devuelve un puntero al carácter actual de str
		}
		str++; // Recorremos el string para pasar al siguiente carácter
	}
	if (x == '\0') // Si x es el carácter nulo
		return ((char *) str); // Devuelve un puntero a dicho carácter nulo
	return (0); // Si no, devuelve cero
}
*/