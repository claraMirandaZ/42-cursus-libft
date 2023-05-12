/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clmirand <clmirand@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 18:03:25 by clmirand          #+#    #+#             */
/*   Updated: 2023/05/05 18:42:42 by clmirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Esta función busca la última aparición de un carácter c en una cadena str dada. La función devuelve un puntero a la posición de la cadena donde se encuentra el carácter o un puntero nulo si no se encuentra el carácter en la cadena */

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str); // Obtenemos la longitud de la cadena usando ft_strlen

	while (i >= 0) // Recorremos la cadena en sentido inverso: desde la última posición hasta la primera
	{
		if (str[i] == (char)c) // Si encontramos el carácter que buscamos, devolvemos un puntero a esa posición
			return ((char *)(str + i));
		i--;
	}
	return (NULL); // Si no encontramos el carácter, devolvemos un puntero nulo
}

/*
Otra forma interesante de resolverla es:
char	*ft_strrchr(const char *str, int c)
{
	int	i; // Variable para recorrer el string
	char	x; // Variable para almacenar el carácter a buscar

	x = c;
	i = ft_strlen(str); // Se guarda en la variable la longitud del string

	if (x == 0) // Si el carácter a buscar es el nulo,
		return ((char *) &str[i]); // retorna un puntero al final del string
	while (i >= 0) 	// Mientras no se llegue al principio del string (la longitud sea mayor o igual a cero)
	{
		if (str[i] == x) // Si encontramos el carácter buscado
			return ((char *)&str[i]); // Retornamos un puntero a esa posición en la cadena
		i--; 		// e iteramos hacia atrás en el string
	}
	return (0); // Si no encontramos el carácter, retorna NULL
}
*/