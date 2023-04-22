/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clmirand <clmirand@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 16:03:25 by clmirand          #+#    #+#             */
/*   Updated: 2023/04/22 16:42:42 by clmirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* La función ft_strlcpy copia los caracteres de una cadena src en otra cadena dst con un tamaño máximo especificado por el argumento size. La función devuelve el número de caracteres que se habrían copiado si el tamaño del buffer hubiera sido suficiente. Esta función es útil para evitar desbordamientos de buffer. */

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;

	i = 0; // Inicializa el índice i en cero

	if (size != 0) // Si size no es cero
	{
		while (i < size - 1 && src[i] != '\0') // Mientras no se alcance el final de src o el tamaño máximo de dst
		{
			dst[i] = src[i]; // Copia el carácter src[i] en dst[i]
			i++; // Incrementa el índice i en 1
		}
		dst[i] = '\0'; // Agrega el caracter nulo al final de dst
	}
	return (ft_strlen(src)); // Retorna la longitud de la cadena src
}

/* 
También se puede crear una variable para guardar la longitud de src, por ejemplo:

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(src); // Obtener la longitud de la cadena src

	if (size < 1) // Si el tamaño de destino es menor que 1,
		return (len); // devuelve la longitud de la cadena original

	i = 0;
	while (src[i] != '\0' && i < (size - 1)) // Mientras no se alcance el final de src o el tamaño máximo de dst
	{
		dst[i] = src[i]; // Copia el origen en el destino
		i++; // y se itera para recorrer src
	}
  dst[i] = '\0'; // Cierra con el carácter nulo de terminación
  
  return (len); // Devuelve la longitud de src (cadena creada)
}
*/
