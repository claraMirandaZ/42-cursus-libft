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
static int	ft_count_words(char const *s, char c)
{
  // Declaramos e inicializamos variables
	int count = 0; // Contador de palabras
	int is_word = 0; // Flag para indicar si se está leyendo una palabra

	while (*s)
	{
		if (*s != c && !is_word) // Si el carácter es diferente al carácter delimitador c y si la bandera is_word es falsa
		{
			is_word = 1; // Se ha encontrado una nueva palabra
			count++; // Incrementa el contador de palabras
		}
		else if (*s == c) // Si el carácter actual de la cadena s es igual al carácter delimitador c (fin de la palabra)
		{
			is_word = 0; // Se encontró el delimitador, se reinicia la flag de palabra
		}
		s++; // Avanza al siguiente carácter
	}
	return count;
}

/* Función auxiliar para copiar una palabra en una nueva cadena */
static char	*ft_copy_word(const char *s, char c)
{
	int		i;
	char	*word;

	i = 0;
	while (s[i] && s[i] != c) // Se ejecuta el bucle mientras no se llegue al carácter nulo \0 ni sea igual que c
		i++;

	word = (char *)malloc((i + 1) * sizeof(char)); // Reserva memoria para la palabra

	if (!word) // Si la variable es nula no se puede asignar memoria
		return NULL;

	i = 0;
	while (s[i] && s[i] != c)
	{
		word[i] = s[i]; // Copia los caracteres de la palabra
		i++;
	}
	word[i] = '\0'; // Agrega el carácter nulo al final de la palabra
	return word;
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		word_count; // Número de palabras en la cadena
	char	**result; // Array de cadenas para almacenar las palabras

	if (!s)
		return NULL; // Verifica si la cadena es nula

	word_count = ft_count_words(s, c); // Cuenta el número de palabras
	result = (char **)malloc((word_count + 1) * sizeof(char *)); // Reserva memoria para el array de cadenas

	if (!result)
		return NULL;

	i = 0;
	while (*s)
	{
		if (*s != c) // Se encuentra un carácter de palabra
		{
			result[i] = ft_copy_word(s, c); // Copia la palabra en una nueva subcadena
			if (!result[i]) // Verifica si ocurrió un error al copiar la palabra
			{
				while (i > 0)
					free(result[--i]); // Libera la memoria de las palabras ya copiadas
				free(result); // Libera el array de cadenas
				return NULL;
			}
			i++; // Incrementa el índice del array
			while (*s && *s != c) // Mientras no se llegue al final de la cadena o encuentre el carácter c
				s++; // Avanza hasta el siguiente carácter de delimitador o el final de la cadena
		}
		else
			s++; // Avanza al siguiente carácter, si es un delimitador
	}
	result[i] = NULL; // Establece el último elemento del array como nulo para indicar el final
	return result; // Devuelve el array de cadenas con las palabras
}