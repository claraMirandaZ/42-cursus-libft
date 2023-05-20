/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clmirand <clmirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 14:03:25 by clmirand          #+#    #+#             */
/*   Updated: 2023/05/15 14:42:42 by clmirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i; // Declara un entero
	char	*str; // Declara el string

	if (!s) // Si la cadena de entrada es nula
		return (NULL); // Devuelve NULL

	str = malloc((ft_strlen(s) + 1) * sizeof(char)); // Asigna memoria para la cadena resultante

	if (!str) // Si la asignación de memoria falla,
		return (NULL); // devuelve NULL

	i = 0; // Inicializa el índice en 0
	while (s[i] != '\0') // Recorremos el string hasta el final
	{
		str[i] = f(i, s[i]); // Aplica la función f al índice actual y al carácter correspondiente de la cadena
		i++; // Incrementa el índice
	}

	str[i] = '\0'; // Agrega el carácter nulo al final de la cadena resultante para marcar su final
	return (str); // Devuelve el puntero a la cadena resultante
}

/*
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ptr; // Puntero para almacenar la cadena resultante
	size_t	i; // Variable para iterar sobre los caracteres de la cadena de entrada

	i = 0;
	ptr = NULL; // Inicialización para control de errores
	ptr = malloc((ft_strlen(s) + 1) * sizeof(char)); // Se reserva memoria para la cadena resultante

	if (!ptr) // Verifica si ha habido errores en la asignación de memoria
		return (0);

	while (s[i]) // Itera sobre los caracteres de la cadena de entrada
	{
		ptr[i] = (*f)(i, s[i]); // Aplicar la función f al carácter actual y almacenar el resultado en ptr
		i++; // Avanza al siguiente carácter
	}
	ptr[i] = '\0'; // Agrega el carácter nulo al final de la cadena resultante
	return (ptr); // Devuelve la cadena resultante
}
*/