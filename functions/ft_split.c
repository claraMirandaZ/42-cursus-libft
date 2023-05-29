/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clmirand <clmirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 10:03:25 by clmirand          #+#    #+#             */
/*   Updated: 2023/05/12 10:42:42 by clmirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/* ft_split se utiliza para dividir una cadena en subcadenas más pequeñas basadas en un delimitador dado. Toma dos argumentos: la cadena a dividir (s) y el carácter delimitador (c) */

/* Función auxiliar para contar el número de palabras en la cadena */
static int ft_count_words(char *str, char c)
{
	int i; // Contador para recorrer el array de caracteres
	int words; // Contador de palabras

	i = 0;
	words = 0;

	while (str[i])
	{
		while (str[i] && str[i] == c) // Ignora los caracteres delimitadores al principio de cada palabra
			i++;

		if (str[i]) // Si aún hay caracteres en la cadena
			words++; // Incrementa el contador de palabras

		while (str[i] && str[i] != c) // Avanza hasta el siguiente delimitador o hasta el final de cadena
			i++;
	}

	return (words); // Devuelve el número de palabras encontradas
}

/* Función para obtener la longitud de una palabra en el string, dada un delimitador específico */
static int ft_get_word_length(char *str, char c)
{
	int i; // Contador para recorrer el array de caracteres

	i = 0;

	while (str[i] && str[i] != c) // Avanza hasta el siguiente delimitador o el final de cadena
		i++;

	return (i); // Devuelve la longitud de la palabra
}

/* Función para escribir una palabra a partir de la subcadena de caracteres */
static char *ft_write_word(char *str, char c)
{
	int word_len; // Longitud de la palabra
	int i; // Contador para recorrer el array de caracteres
	char *word; // Puntero para almacenar la palabra

	i = 0;
	word_len = ft_get_word_length(str, c); // Obtiene la longitud de la palabra
	word = (char *)malloc(sizeof(char) * (word_len + 1)); // Asigna memoria para esa palabra
	if (!word)
		return (NULL);

	while (i < word_len)
	{
		word[i] = str[i]; // Copia sus caracteres
		i++;
	}

	word[i] = 0; // Agrega el carácter nulo al final de la palabra

	return (word); // Devuelve la palabra creada
}

char **ft_split(char const *s, char c)
{
	char *str; // Puntero para almacenar la cadena de caracteres convertida a tipo char *
	char **strings; // Array de punteros para almacenar las palabras
	int i; // Contador para recorrer ese array

	if (!s) // Comprobación de la validez de la palabra
		return (NULL);

	str = (char *)s; // Convierte la cadena constante en una cadena modificable
	i = 0;
	strings = (char **)malloc(sizeof(char *) * (ft_count_words(str, c) + 1)); // Asigna memoria para el array de palabras
	if (!strings) // Validación de la asignación de memoria. Si malloc ha fallado,
		return (NULL); // devuelve NULL

	while (*str)
	{
		while (*str && *str == c) // Ignora los caracteres delimitadores al principio de cada palabra
			str++; // Avanza hasta el siguiente carácter que no sea el delimitador

		if (*str) // Si aún quedan caracteres en la cadena,
		{
			strings[i] = ft_write_word(str, c); // llama a la función auxiliar para escribir la siguiente palabra en el array
			i++;
		}

		while (*str && *str != c) // Mientras str no sea nulo ni sea el carácter delimitador,
			str++; // avanza hasta el siguiente delimitador o hasta el final de cadena
	}

	strings[i] = 0; // Agrega un puntero nulo al final del array de palabras para finalizarlo

	return (strings); // Devuelve el array
}