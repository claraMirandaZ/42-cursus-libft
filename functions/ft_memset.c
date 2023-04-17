/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clmirand <clmirand@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 11:03:25 by clmirand          #+#    #+#             */
/*   Updated: 2023/04/16 11:42:42 by clmirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include 'libft.h'

/* La función ft_memset llena un bloque de memoria con un valor específico. Toma tres argumentos: un puntero al bloque de memoria que será rellenado, un valor a poner y un número de bytes asociados al valor. Devuelve un puntero al bloque de memoria que se ha llenado */

#include "libft.h"

void	*ft_memset(void *p, int c, size_t len)
// Los parámetros son:
// Puntero vacío p que representa el bloque de memoria a ser llenado
// Variable c que es el valor a poner
// Variable de tipo size_t que representa el número de bytes a poner en c
{
	unsigned char *ptr; // Puntero que apunta al bloque de memoria
	unsigned char a; // Variable que guardará el valor del carácter que se usará para llenar los bloques de memoria apuntados por ptr
	size_t i; // Contador para iterar por los bloques apuntados por ptr, cuyo valor se guardará en a

	ptr = (unsigned char *)p; // Inicializa el ptr al mismo sitio que p
	a = (unsigned char)c; // Inicializa a con el valor de c convertido en unsigned char
	i = 0; // Inicializa el contador a 0

	while (i < len)
	{
		ptr[i] = a; // En cada iteración, el elemento en posición i tendrá el valor de a
		i++;
	}
	return (ptr); // Devuelve el puntero al bloque de memoria que ha sido llenado con el valor de c
}

/*
void	*ft_memset(void *p, int c, size_t len)
{
	unsigned char *ptr;
	unsigned char a;
	size_t i;

	ptr = (unsigned char *)p;
	a = (unsigned char)c;
	i = 0;

	while (i < len)
	{
		ptr[i] = a;
		i++;
	}
	return (ptr);
}
*/