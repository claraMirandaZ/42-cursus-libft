/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clmirand <clmirand@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 14:03:25 by clmirand          #+#    #+#             */
/*   Updated: 2023/05/10 14:42:42 by clmirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"  

/* La función ft_substr toma como entrada una cadena s, un índice start y una longitud len, y devuelve una nueva cadena que es una subcadena de la cadena de entrada s a partir del índice start con una longitud len especificada. Si start está fuera de los límites de s, se devuelve una cadena vacía. Si no se puede asignar memoria para la nueva cadena, se devuelve un puntero nulo. */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr; // Puntero a la nueva cadena
	size_t	i; // Índice

	if (!s) { // Si la cadena es nula,
		return (0); // devuelve un puntero nulo
	}

	if ((unsigned int)ft_strlen(s) < start) { // Si el índice está fuera de los límites de la cadena,
		return (ft_strdup("")); // devuelve una cadena vacía
	}

	i = ft_strlen(s + start); // Obtiene la longitud de la cadena a partir del índice start

	if (i < len) { // Si la longitud de la cadena es menor que len,
		len = i; // establece len en la longitud real
	}

	ptr = malloc(sizeof(char) * (len + 1)); // Asigna memoria para la nueva cadena

	if (!ptr) { // Si no se puede asignar memoria,
		return (0); // devuelve un puntero nulo
	}

	ft_strlcpy(ptr, s + start, len + 1); // Copia la subcadena en la nueva cadena

	return (ptr); // Devuelve el puntero a la nueva cadena
}

/*
Otra forma de enfocar esta función:
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str; // Variable que contendrá la subcadena extraída
	size_t	i; // Variable auxiliar para iterar

	if (!s) // Comprueba si la cadena de origen es NULL
		return (NULL);

	if (start > ft_strlen(s)) // Si el índice de inicio está más allá del final de la cadena,
		len = 0; // la longitud de la subcadena es 0

	if (ft_strlen(s) < len) // Si la longitud de la subcadena es mayor que la longitud de la cadena de origen,
		len = ft_strlen(s); // la longitud se ajusta

	str = (char *)malloc(sizeof(*s) * (len + 1)); // Asignación de memoria para la subcadena extraída

	if (!str) // Comprueba si la asignación de memoria fue OK
		return (NULL);

	// Itera a través de la cadena de origen desde el índice de inicio, copiando cada carácter en la subcadena
	i = 0;
	while (i < len)
	{
		str[i] = s[i + start];
		i++;
	}

	str[i] = '\0'; // Añade un carácter nulo al final de la subcadena

	return (str); // Devuelve la subcadena extraída
}
*/