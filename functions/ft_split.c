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
int ft_count_words(char const *s, char c)
{
	int count;
	int i;

	count = 0;
	i = 0;

	while (s[i] != '\0') // Itera hasta llegar al final de la cadena s
	{
		if (s[i] != c) // Si el carácter actual no es igual al delimitador c
		{
			count++; // Incrementa el contador de palabras
			while (s[i] != c && s[i] != '\0') // Itera hasta encontrar el próximo delimitador o el final de la cadena
				i++; // Incrementa el índice para pasar al siguiente carácter
		}
		else
		{
			i++; // Si el carácter actual es igual al delimitador, pasa al siguiente carácter
		}
	}
	return count; // Devuelve el número total de palabras encontradas
}

/* Función auxiliar para obtener la siguiente palabra de la cadena */
char	*ft_get_next_word(char const *s, char c, int *start)
{
	int end;

	end = *start;
	while (s[end] != c && s[end] != '\0') // Itera hasta encontrar el siguiente delimitador o el final de la cadena
		end++; // Incrementa el índice para pasar al siguiente carácter

	int word_len;
	char *word;

	word_len = end - *start; // Calcula la longitud de la palabra
	word = (char *)malloc((word_len + 1) * sizeof(char)); // Asigna memoria para la palabra

	for (int i = 0; i < word_len; i++) // Copia la palabra desde s a word
		word[i] = s[*start + i]; // Obtiene el carácter correspondiente desde s

	word[word_len] = '\0'; // Agrega el carácter nulo al final de la palabra
	*start = end; // Actualiza el índice de inicio para la próxima palabra
	return word; // Devuelve la palabra obtenida
}

char **ft_split(char const *s, char c)
{
	int num_words;
	char **result;
	int start;
	int word_index;

	num_words = ft_count_words(s, c); // Obtiene el número total de palabras en s
	result = (char **)malloc((num_words + 1) * sizeof(char *)); // Asigna memoria para la matriz de palabras
	start = 0; // Inicializa el índice de inicio
	word_index = 0; // Inicializa el índice de palabras en la matriz

	while (s[start] != '\0') // Itera hasta llegar al final de la cadena s
	{
		if (s[start] != c) // Si el carácter actual no es igual al delimitador c
			result[word_index++] = ft_get_next_word(s, c, &start); // Obtiene la siguiente palabra y la guarda en la matriz de palabras
		else
			start++; // Si el carácter actual es igual al delimitador, pasa al siguiente carácter
	}

	result[word_index] = NULL; // Agrega un puntero nulo al final de la matriz de palabras
	return result; // Devuelve la matriz de palabras obtenida
}