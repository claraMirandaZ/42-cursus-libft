/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clmirand <clmirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:03:25 by clmirand          #+#    #+#             */
/*   Updated: 2023/05/10 16:42:42 by clmirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* La función ft_strtrim recorta los caracteres que aparecen en el conjunto set del principio y el final de la cadena de caracteres s1. En otras palabras, elimina todos los caracteres que se encuentran al principio y al final de la cadena s1 que coinciden con cualquiera de los caracteres que se encuentran en la cadena set */

char *ft_strtrim(char const *s1, char const *set)
{
	size_t i;
	size_t len;
	size_t size;

	if (!s1) // Verifica si s1 es nulo y devuelve NULL si es así
		return (NULL);

	i = 0; // Inicializa i en 0
	len = ft_strlen(s1); // y len en la longitud de s1

	while (ft_strchr(set, s1[i]) && s1[i]) // Mueve i hasta el primer carácter de s1 que no está en set
		i++; // E itera

	while (ft_strchr(set, s1[len]) && len) // Mueve len hasta el último carácter de s1 que no está en set
		len--;

	size = len - i; // Calcula el tamaño del string, recortado

	return (ft_substr(s1, i, size + 1)); // Llama a la función ft_substr para devolver la cadena de caracteres recortada
}

/*
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*rslt; // Variable para almacenar la cadena de caracteres concatenada
	size_t	s1_len; // Longitud de la cadena de caracteres s1
	size_t	s2_len; // Longitud de la cadena s2

	if (!s1 || !s2) { // Si alguna de las cadenas es nula, devuelve NULL
		return (NULL);
	}

	s1_len = ft_strlen(s1); // Calcula la longitud de la cadena s1
	s2_len = ft_strlen(s2); // Calcula la longitud de s2

	rslt = (char *)malloc((s1_len + s2_len + 1) * sizeof(char)); // Asigna memoria para la nueva cadena
	if (rslt == NULL) { // Si la asignación falla, devuelve NULL
		return (NULL);
	}
	ft_strlcpy(rslt, s1, s1_len + 1); // Copia s1 a rslt
	ft_strlcat(rslt, s2, s1_len + s2_len + 1); // Concatena s2 a rslt

	return (rslt); // Devuelve el puntero a la cadena resultante
}
*/

/*
Ambas funciones concatenan dos cadenas de caracteres y devuelven un puntero a la cadena resultante.
La diferencia está en la forma en que se hace la concatenación; la segunda versión utiliza la función ft_strlcpy() y ft_strlcat() para copiar y concatenar las cadenas, mientras que la primera utiliza una variable de tamaño suficiente para almacenar la nueva cadena y una serie de bucles y operaciones para copiar y concatenar las cadenas.
*/