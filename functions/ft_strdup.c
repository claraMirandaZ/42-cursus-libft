/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clmirand <clmirand@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 12:03:25 by clmirand          #+#    #+#             */
/*   Updated: 2023/05/10 12:42:42 by clmirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Esta función reserva memoria dinámica para crear una copia de una cadena de caracteres str y devuelve un puntero a la nueva cadena de caracteres.
La memoria para la cadena duplicada se asigna dinámicamente utilizando malloc, por lo que es responsabilidad del programador liberarla más tarde utilizando free (cosa que yo no hago, por cierto ¬¬U) */

char *ft_strdup(const char *str)
{
  char *ptr;
  int i;

  i = 0;
  ptr = NULL;
  ptr = malloc (ft_strlen(str) * sizeof(char) + 1); // Asigna memoria para la cadena duplicada
  if (!ptr) // Si el puntero es nulo, la asignación falló
      return (0); // y devuelve un puntero nulo
  while (str[i] != '\0') // Mientras el carácter en la posición i de la cadena no sea el carácter nulo de terminación
  {
    ptr[i] = str[i]; // Recorre la cadena de origen str y copia cada uno de sus caracteres en la nueva cadena ptr
    i++; // Itera
  }
  ptr[i] = '\0'; // Agrega el caracter nulo final a la cadena duplicada
  return (ptr); // Devuelve el puntero a la cadena duplicada
}

/*
Otra forma de desarrollar esta función:
char	*ft_strdup(const char *str)
{
	size_t	len;
	char	*str;

	len = ft_strlen(str) + 1; // Calcula el tamaño de la cadena str y añade 1 para el carácter nulo final

	str = malloc(len); // Asigna memoria para la cadena resultante

  if (!str) { // Si la asignación de memoria falla,
    return (NULL); // devuelve NULL
  }

	ft_strlcpy(str, str, len); // Copia la cadena str en la cadena recién asignada utilizando ft_strlcpy

	return (str); // Devuelve un puntero a la cadena recién asignada
}
*/