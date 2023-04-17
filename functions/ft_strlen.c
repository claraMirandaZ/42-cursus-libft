/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clmirand <clmirand@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 10:03:25 by clmirand          #+#    #+#             */
/*   Updated: 2023/04/16 10:42:42 by clmirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include 'libft.h'

/* Esta función computa la longitud de un string, iterando por él hasta que llega al final (carácter nulo de terminación '\0'), retornando el índice de dicho carácter. */

size_t	ft_strlen(const char *str)
{
	size_t	length; // Se declara una variable length de tipo size_t que se usa para llevar la cuenta de la longitud del string str

	length = 0; // Se inicializa a 0

	while (str[length] != '\0') // Continúa el bucle hasta que el string llegue al carácter nulo de terminación
	{
		length++; // Dentro del bucle, incrementamos la variable en uno por cada carácter del string
	}
	return (length); // Fuera del bucle, retornamos el valor final de la longitud de la variable, que representa la longitud del string
}

/*
Una versión más optimizada de esta función es
size_t	ft_strlen(const char *str) {
	const char *p = str;
	while (*p)
		++p;
	return (p - str);
}
*/

/*
Y otra
size_t ft_strlen(const char *str) {
    const char *p = str;
    while (*p != '\0') {
        p++;
    }
    return (size_t)(p - str);
}
*/