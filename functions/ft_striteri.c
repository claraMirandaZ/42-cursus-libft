/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clmirand <clmirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:03:25 by clmirand          #+#    #+#             */
/*   Updated: 2023/05/15 15:42:42 by clmirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* El propósito de esta función es aplicar la función f a cada carácter de la cadena s, pasando como argumentos la posición del carácter en la cadena y un puntero a ese carácter */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int i;

	// Verifica si s o f son NULL, en cuyo caso no se puede realizar ninguna acción:
	if (!s || !f)
		return ;

	i = 0;
	while (s[i] != '\0') // Recorre s hasta el final (carácter nulo)
	/* También vale while (s[i]) */
	{
		f(i, &s[i]); // Llama a la función f pasando el índice actual i y la dirección del carácter en s[i]
		i++; // Pasa al siguiente carácter en la cadena
	}
}
