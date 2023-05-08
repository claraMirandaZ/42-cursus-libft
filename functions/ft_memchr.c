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

/* La función ft_memchr busca la primera aparición de un carácter en una cadena de memoria */

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;		// Variable para iterar sobre la memoria
	const char	*str;		// Convierte el puntero constante void en un puntero constante char para facilitar el acceso a los datos

	str = s; // La variable str se inicializa con el puntero constante s
	i = 0; // Inicializa el contador de iteración en cero

	while (i < n) // Itera mientras no haya llegado al final de la memoria
	{
		if ((unsigned char)str[i] == (unsigned char)c)	// Comprueba si el valor actual es igual al valor buscado
			return ((char *)s + i); // Si es así, devuelve un puntero a la posición de la memoria en la que se encuentra el valor buscado
		i++; // Incremento del contador de iteración
	}
	return (0); // Si el valor buscado no se encuentra en la memoria, retorna NULL
}
