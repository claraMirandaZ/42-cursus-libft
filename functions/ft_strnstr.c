/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clmirand <clmirand@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 12:03:25 by clmirand          #+#    #+#             */
/*   Updated: 2023/05/06 12:42:42 by clmirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Esta función busca la primera aparición de una subcadena "aguja" (needle) dentro de una cadena más grande "pajar" (haystack) limitando la búsqueda a un número máximo de caracteres (len) */

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t h;
	size_t n;

	h = 0;

	if (needle[h]  == '\0') // Si la aguja es igual a 0
		return ((char *)haystack); // Retorna un puntero al pajar
	while (haystack[h]) // Mientras la cadena de búsqueda no haya llegado a su final
	{
		n = 0;
		while (haystack[h + n] == needle[n] && (h + n) < len) // Mientras haya una coincidencia de caracteres y no se alcance el límite de búsqueda
		{
			if (haystack[h + n] == '\0' && needle[n] == '\0') // Si ambas cadenas terminan juntas
				return ((char *)haystack + h); // Se retorna un puntero al comienzo de la aguja en el pajar
			n++; // Incremento del contador para buscar la siguiente letra de la aguja en el pajar
		}
		if (needle[n] == '\0') // Si todas las letras de la aguja han sido encontradas en el pajar
			return ((char *)haystack + h); // Devuelve un puntero al comienzo de la aguja en el pajar
		h++; // Incremento del contador para buscar la aguja en el siguiente carácter del pajar
	}
	return (0); // Retorna cero si la aguja no se encontró en el pajar
}
