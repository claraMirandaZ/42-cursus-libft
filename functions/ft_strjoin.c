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

/* ft_strjoin concatena dos cadenas de caracteres (s1 y s2) para crear una nueva cadena que contiene ambas. La nueva cadena resultante se almacena en un nuevo bloque de memoria, que se asigna dinámicamente en tiempo de ejecución, utilizando la función malloc */

char *ft_strjoin(char const *s1, char const *s2)
{
	int i;
	int len1;
	int len2;
	char *ptr;

	i = 0;
	len1 = ft_strlen(s1); // Obtiene la longitud de s1
	len2 = ft_strlen(s2); // Obtiene la longitud de s2
	ptr = NULL; // Inicializa el puntero a NULL
	ptr = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char)); // Asigna memoria para la cadena resultante

	if (!ptr)
		return (0); // Si malloc falla, devuelve NULL
	
	while (i < len1)
	{
		ptr[i] = s1[i]; // Copia los caracteres de s1 a ptr
		i++;
	}

	i = 0;

	while (i < len2)
	{
		ptr[len1 + i] = s2[i]; // Copia los caracteres de s2 a ptr después de s1
		i++;
	}

	ptr[len1 + i] = '\0'; // Agrega el caracter nulo de terminación al final de la cadena
	return (ptr); // Devuelve el puntero a la cadena resultante
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