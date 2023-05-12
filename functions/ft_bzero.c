/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clmirand <clmirand@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 10:03:25 by clmirand          #+#    #+#             */
/*   Updated: 2023/04/18 10:42:42 by clmirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Esta función se utiliza para establecer un bloque de memoria a cero. Es equivalente a ft_memset, pero ft_bzero se utiliza específicamente para establecer una región de memoria a cero, mientras que ft_memset se puede usar para establecer una región de memoria a cualquier valor */

void	ft_bzero(void *s, size_t n) // Puntero genérico a la memoria y un tamaño -cuántos bytes se deben establecer a 0
{
	unsigned char	*src; // Puntero sin signo src que apunta a la dirección de memoria del bloque s
	size_t	i; // Contador para iterar a través del bloque de memoria

	src = (unsigned char *)s; 
	i = 0;
	
  while (i < n) // El bucle se ejecutará mientras que i sea menor que n
	{
		*src = 0; // La dirección de memoria a la que apunta el puntero src se establece en cero
		i++;
		src++; // El puntero se mueve al siguiente byte de memoria en preparación para el siguiente ciclo del bucle
	}
}

/* 
Al ser equivalente a ft_memset, la función podría simplificarse así:

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
*/