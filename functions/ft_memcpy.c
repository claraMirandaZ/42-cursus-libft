/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clmirand <clmirand@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:03:25 by clmirand          #+#    #+#             */
/*   Updated: 2023/04/20 11:42:42 by clmirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* La función ft_memcpy() se usa para copiar un bloque de memoria de una ubicación a otra 
Los parámetros son:
- dest: puntero a la ubicación de destino donde se copiarán los datos.
- src: puntero a la ubicación de origen de donde se copiarán los datos.
- n: cantidad de bytes que se copiarán.

Esta función es similar a ft_memmove(), pero no garantiza que los bloques de memoria se copien correctamente si se superponen. Si se necesitan garantías en caso de solapamiento, se debe usar ft_memmove().*/

void	*ft_memccpy(void *dst, const void *src, size_t n)
{
	// Se declaran los punteros char para dst y src, así como la variable i para llevar el control del número de bytes copiados
	char	*d;
	char	*s;
	size_t			i;

	if (!dst && !src)
		return (NULL); // Se verifica si dst y src son nulos

	// Se convierten los punteros a dst y src a punteros char para poder copiar byte a byte
	d = (const char *)dst;
	s = (char *)src;
	i = 0; // Se inicializa la variable i en 0

	// Se recorre el bloque de memoria de src copiando byte a byte en dst hasta llegar al final o hasta encontrar el carácter buscado
	while (i < n)
	{
		d[i] = s[i]; // Se copia un byte de src en dst
		i++; // Se incrementa i
	}

	// Retorna el dst modificado
	return (dst);
}

/*
Otra forma:

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	x;
	size_t			i;

	if (src == NULL && dst == NULL)
		return (NULL);
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	x = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
		if (s[i] == x)
		{
			d[i] = x;
			return (d + i + 1);
		}
	}
	return (NULL);
}
*/