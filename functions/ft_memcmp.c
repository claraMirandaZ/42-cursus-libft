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

/* Esta función compara los primeros n bytes de los bloques de memoria apuntados por los punteros str1 y str2 y devuelve un valor entero que indica la relación entre ellos */

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	size_t		i; // Declaramos una variable de tamaño
	const char	*str1; // Puntero constante a char para str1
	const char	*str2; // Puntero constante a char para str2

	str1 = ptr1; // Inicializamos el puntero ptr1 con str1
	str2 = ptr2; // Inicializamos el puntero ptr2 con str2
	i = 0; // Inicializamos el contador a 0

	while (i < num) // Mientras no hayamos llegado al final de los datos a comparar y no hayamos encontrado una diferencia
	{
		if (str1[i] != str2[i]) // Si encontramos caracteres diferentes
			return ((unsigned char)str1[i] - (unsigned char)str2[i]); // Retornamos la diferencia
		i++; // Avanzamos al siguiente byte
	}
	return (0); // Si no encontramos ninguna diferencia, retornamos 0
}


/* 
Otras formas de hacerlo:
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

/*
int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	size_t	i; // Variable para contar el número de bytes comparados
	unsigned const char		*str1; // Puntero constante a unsigned char para ptr1
	unsigned const char		*str2; // Puntero constante a unsigned char para ptr2

	i = 0; // Inicializamos el contador a 0
	str1 = (unsigned const char *)ptr1; // Convertimos el puntero ptr1 a un puntero constante a unsigned char
	str2 = (unsigned const char *)ptr2; // Convertimos el puntero ptr2 a un puntero constante a unsigned char

	while (i < num) // Mientras no hayamos llegado al final de los datos a comparar
	{
		if (*str1 != *str2) // Si encontramos caracteres diferentes
		{
			return ((int)(*str1 - *str2)); // Retornamos la diferencia en valor entero
		}
		str1++; // Avanzamos al siguiente byte en ptr1
		str2++; // Avanzamos al siguiente byte en ptr2
		i++; // Incrementamos el contador de bytes comparados
	}

	return (0); // Si no encontramos ninguna diferencia, retornamos 0
}
*/

