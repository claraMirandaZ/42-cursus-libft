/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clmirand <clmirand@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 10:03:25 by clmirand          #+#    #+#             */
/*   Updated: 2023/05/10 10:42:42 by clmirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Esta función se utiliza para asignar memoria dinámicamente y reservar un bloque de memoria contigua de tamaño num * size, y luego inicializarlo con ceros.
Para ello, utiliza la función malloc para reservar la memoria, y si ésta se asigna correctamente, usa la función ft_bzero para inicializar todo el bloque de memoria con ceros */

void	*ft_calloc(size_t num, size_t size)
{
	void	*result;

	result = malloc(num * size); // Reserva memoria contigua de tamaño num * size
  // El resultado se almacena en la variable result
	if (!result) // Verifica si se asignó la memoria correctamente
		return (NULL); // Si result es igual a NULL, significa que la función malloc no pudo reservar suficiente memoria
	else
	{
		ft_bzero(result, (num * size)); // Inicializa el bloque de memoria reservado con ceros usando bt_bzero
		return (result); // Devuelve el puntero result que apunta al bloque de memoria reservado e inicializado
	}
}

/* Estas líneas de código están reservando un bloque de memoria de tamaño num * size, lo inicializan a cero y devuelven un puntero al inicio de la región de memoria reservada */
