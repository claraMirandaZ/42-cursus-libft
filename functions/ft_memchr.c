/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clmirand <clmirand@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 10:03:25 by clmirand          #+#    #+#             */
/*   Updated: 2023/05/06 10:42:42 by clmirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Esta función busca la primera aparición del valor value dentro del bloque de memoria apuntado por ptr, examinando un máximo de num bytes. Si encuentra el valor, retorna un puntero al primer byte donde se encontró. Si no se encuentra el valor dentro de los bytes examinados, la función retorna un puntero nulo (0) */

void	*ft_memchr(const void *ptr, int value, size_t num)
{
	size_t	i; // Variable para iterar sobre la memoria
	const char	*str; // Convierte el puntero constante void en un puntero constante char para facilitar el acceso a los datos

	str = ptr; // La variable str se inicializa con el puntero constante ptr
	i = 0; // Inicializa el contador de iteración en cero

	while (i < num) // Itera mientras no haya llegado al final de la memoria
	{
		if ((unsigned char)str[i] == (unsigned char)value)	// Comprueba si el valor actual es igual al valor buscado
			return ((char *)ptr + i); // Si es así, devuelve un puntero a la posición de la memoria en la que se encuentra el valor buscado
		i++; // Incremento del contador de iteración
	}
	return (0); // Si el valor buscado no se encuentra en la memoria, retorna NULL
}
