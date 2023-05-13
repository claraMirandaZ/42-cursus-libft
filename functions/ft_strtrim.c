/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clmirand <clmirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:03:25 by clmirand          #+#    #+#             */
/*   Updated: 2023/05/10 16:42:42 by clmirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* La función ft_strtrim recorta los caracteres que aparecen en el conjunto set del principio y el final de la cadena de caracteres s1. En otras palabras, elimina todos los caracteres que se encuentran al principio y al final de la cadena s1 que coinciden con cualquiera de los caracteres que se encuentran en la cadena set */

char *ft_strtrim(char const *s1, char const *set)
{
    size_t i;
    size_t len;
    size_t size;

    if (!s1) // Verifica si s1 es nulo y devuelve NULL si es así
        return (NULL);

    i = 0; // Inicializa i en 0
    len = ft_strlen(s1); // y len en la longitud de s1

    while (ft_strchr(set, s1[i]) && s1[i]) // Mueve i hasta el primer carácter de s1 que no está en set
        i++; // E itera

    while (ft_strchr(set, s1[len]) && len) // Mueve len hasta el último carácter de s1 que no está en set
        len--;

    size = len - i; // Calcula el tamaño del string, recortado

    return (ft_substr(s1, i, size + 1)); // Llama a la función ft_substr para devolver la cadena de caracteres recortada
}

/* 
Esta versión no incluye una comprobación adicional para verificar si s1 es nulo antes de hacer cualquier otra cosa, pero es otra forma interesante de hacerlo:
char *ft_strtrim(char const *s1, char const *set)
{
    size_t start; // Variable para el inicio de la subcadena
    size_t end; // Variable para el final de la subcadena
    char *str; // Puntero para la nueva cadena creada

    str = 0; // Inicializa el puntero a NULL
    if (s1 != 0 && set != 0) // Verifica que los parámetros de entrada no sean nulos
    {
        start = 0; // Inicializa la variable de inicio del substring a 0
        end = ft_strlen(s1); // Inicializa la variable de final del substring a la longitud de la cadena s1
    
        while (s1[start] && ft_strchr(set, s1[start])) // Mientras el carácter de s1 en la posición start pertenezca al conjunto set y no sea el carácter nulo,
        {
            start++; // incrementa el inicio de la subcadena
        }
        while (s1[end - 1] && ft_strchr(set, s1[end - 1]) && end > start) // Mientras el carácter de s1 en la posición end - 1 pertenezca al conjunto set, no sea el caracter nulo y end sea mayor que start,
        {
            end--; // decrementa el final del substring
        }
    
        str = (char *)malloc(sizeof(char) * (end - start + 1)); // Asigna memoria dinámica para la nueva cadena
    
        if (str) // Si se pudo asignar la memoria
        {                                                 
            ft_strlcpy(str, &s1[start], end - start + 1); // Copia el substring desde la posición start hasta la posición end en la nueva cadena
        }
    }
    return (str); // Devuelve la nueva cadena creada
}
*/
