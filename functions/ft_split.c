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

/* ft_split divide una cadena de texto en palabras utilizando un delimitador dado y devuelve un array de cadenas de caracteres (palabras) como resultado. Toma dos argumentos: la cadena a dividir (s) y el carácter delimitador (c) */

/* Función auxiliar para contar el número total de palabras en una cadena de caracteres (str) utilizando un delimitador específico (c). La función recorre la cadena carácter por carácter y mantiene un contador totalWordNbr para rastrear el número de palabras encontradas */
static int	ft_count_words(const char *str, char c)
{
    int	i; // Contador para recorrer el string
    int	totalWordNbr; // Variable para almacenar el número total de palabras en el string
    int	flag; // Bandera booleana que indica si el programa se encuentra dentro o fuera de una palabra, mientras recorre la cadena

    i = 0;
    totalWordNbr = 0;
    flag = 0;

    while (str[i] != '\0') // Recorre la cadena hasta el final
    {
        if (str[i] != c && flag == 0) // Verifica si el carácter actual no es el delimitador y si no está dentro de una palabra
        {
            // Indica que está dentro de una palabra y aumenta el contador de palabras
            flag = 1;
            totalWordNbr++;
        }
        else if (str[i] == c) // Verifica si el carácter actual es el delimitador
        {
            flag = 0; // Indica que no está dentro de una palabra
        }
        i++;
    }
    return (totalWordNbr); // Devuelve el total de palabras encontradas
}

/* Función auxiliar para liberar la memoria asignada dinámicamente para un array de cadenas. Itera sobre las cadenas individuales en matrix y las libera una por una utilizando la función free(). Luego, libera la memoria asignada para el array completo */
static char	**ft_free_memory(char **matrix)
{
    size_t	i;

    i = 0;

    // Itera sobre la matriz (array de cadenas) hasta encontrar un elemento nulo
    while (matrix[i])
    {
        free(matrix[i]); // Libera la memoria asignada para cada cadena individual
        i++;
    }

    free(matrix); // Libera la memoria asignada para la matriz en sí

    return (NULL); // Devuelve un puntero nulo para indicar que la memoria ha sido liberada correctamente
}

/* Función auxiliar para asignar memoria dinámicamente y reservar un bloque de memoria contigua de tamaño num * size, y luego inicializarlo con ceros. Está en esta misma Libft.

void	*ft_calloc(size_t num, size_t size)
{
	void	*result;

	result = malloc(num * size);

	if (!result)
		return (NULL);
	else
	{
		ft_bzero(result, (num * size));
		return (result);
	}
} */

/* Función auxiliar para extraer una subcadena de una cadena dada (s), desde un índice dado (start) y con una longitud determinada (len). Está en esta misma Libft.

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	if (!s) {
		return (0);
	}

	if ((unsigned int)ft_strlen(s) < start) {
		return (ft_strdup(""));
	}

	i = ft_strlen(s + start);

	if (i < len) {
		len = i;
	}

	ptr = malloc(sizeof(char) * (len + 1));

	if (!ptr) {
		return (0);
	}

	ft_strlcpy(ptr, s + start, len + 1);

	return (ptr);
} */

char	**ft_split(const char *s, char c)
{
	char	**words; // Puntero a un puntero de caracteres para contener las palabras como strings
	size_t	i; // Índice para la posición en la cadena de entrada (y almacenar la longitud de la palabra)
	int	j; // Contador para la posición en el array de palabras
	int	totalWords; // Almacena el número total de palabras en la cadena de entrada

	totalWords = ft_count_words(s, c); // Cuenta el número total de palabras en la cadena

	words = ft_calloc(totalWords + 1, sizeof(char *)); // Asigna memoria para el array de palabras
	
	// Control de errores. Verifica si la asignación de memoria ha ido bien, o si la cadena de entrada es nula
	if (!words || !s)
		return (0);
		/* Si se cumple alguna de estas condiciones, la función se detiene y retorna un puntero nulo para indicar un error */
	
	i = 0;
	j = 0;
	
	// Itera hasta que se hayan registrado todas las palabras
	while (j < totalWords)
	{
		i = 0;
		
		// Omite los caracteres delimitadores al comienzo de la cadena
		while (*s == c)
			s++;
			/* Este bucle avanza el puntero (s) más allá de los caracteres delimitadores al comienzo de la cadena de entrada. Esto es necesario para asegurarse de que el proceso de extracción de palabras comience desde el primer carácter no delimitador */
		
		// Cuenta la longitud de la palabra actual
		while (s[i] != c && s[i])
			i++;
		
		words[j] = ft_substr(s, 0, i); // Extrae la palabra actual con ft_substr y la asigna a la posición j del array de palabras words
		
		s = s + i; // Avanza el puntero de la cadena a la siguiente palabra
		
		// Verifica si la extracción de la palabra ha tenido éxito
		if (words[j++] == 0)
			return (ft_free_memory(words));
			/* En caso de que no se haya podido extraer la palabra correctamente, se llama a la función ft_free_memory para liberar la memoria asignada al array words y luego se devuelve un puntero nulo para indicar un error */
	}
	
	return (words); // Devuelve el array de palabras resultante
}
