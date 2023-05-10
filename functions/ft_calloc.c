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

/* Esta función se utiliza para asignar memoria dinámicamente y reservar un bloque de memoria contigua de tamaño count * size, y luego inicializarlo con ceros.
Para ello, utiliza la función malloc para reservar la memoria, y si ésta se asigna correctamente, usa la función ft_bzero para inicializar todo el bloque de memoria con ceros */

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;

	
	result = malloc(count * size); // Reservar memoria contigua de tamaño count * size
  // El resultado se almacena en la variable result
	if (!result) // Verificar si se asignó la memoria correctamente
		return (NULL); // Si result es igual a NULL, significa que la función malloc no pudo reservar suficiente memoria
	else
	{
		ft_bzero(result, (count * size)); // Inicializar el bloque de memoria reservado con ceros usando bt_bzero
		return (result); // Se devuelve el puntero result que apunta al bloque de memoria reservado e inicializado
	}
  /* Estas líneas de código están reservando un bloque de memoria de tamaño count * size, lo inicializan a cero y devuelven un puntero al inicio de la región de memoria reservada */
}
