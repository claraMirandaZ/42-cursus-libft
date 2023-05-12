/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clmirand <clmirand@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 11:03:25 by clmirand          #+#    #+#             */
/*   Updated: 2023/05/06 11:42:42 by clmirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Esta función compara los primeros n bytes de los bloques de memoria apuntados por los punteros str1 y str2 y devuelve un valor entero que indica la relación entre los bloques de memoria */

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t		i; // Declaramos una variable de tamaño
	const char	*ptr1; // Puntero constante a char para str1
	const char	*ptr2; // Puntero constante a char para str2

	ptr1 = str1; // Inicializamos el puntero ptr1 con str1
	ptr2 = str2; // Inicializamos el puntero ptr2 con str2
	i = 0; // Inicializamos el contador a 0

	while (i < n) // Mientras no hayamos llegado al final de los datos a comparar y no hayamos encontrado una diferencia
	{
		if (ptr1[i] != ptr2[i]) // Si encontramos caracteres diferentes
			return ((unsigned char)ptr1[i] - (unsigned char)ptr2[i]); // Retornamos la diferencia en ASCII
		i++; // Avanzamos al siguiente byte
	}
	return (0); // Si no encontramos ninguna diferencia, retornamos 0
}


/* 
Otra forma de hacerlo:
int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t	i; // Variable para iterar a través de los bytes de los punteros
	
  i = 0;

	while (i < n) // Mientras no lleguemos al final de las regiones
	{
		if (((unsigned char *)str1)[i] != ((unsigned char *)str2)[i]) // Si encontramos una diferencia entre los dos bytes
			return (((unsigned char *)str1)[i] - ((unsigned char *)str2)[i]); // Retornamos la diferencia entre los bytes como un entero
		i++; // Avanzamos al siguiente byte
	}
	return (0); // Si llegamos aquí, los datos son iguales, así que retornamos 0
}
*/

