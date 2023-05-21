/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clmirand <clmirand@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:03:25 by clmirand          #+#    #+#             */
/*   Updated: 2023/04/24 16:42:42 by clmirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Esta función se utiliza para concatenar dos cadenas de caracteres de forma segura, es decir, sin desbordar el búfer de destino */

/* 
Función auxiliar para calcular la longitud de una cadena de caracteres
size_t ft_strlen(const char *c) {
    size_t len = 0;
    while (c[len])
        len++;
    return len;
} 
*/

size_t ft_strlcat(char *dest, const char *src, size_t destsize) {

  size_t i, srclen, destlen; // Se pueden declarar por separado

  i = 0;
  srclen = ft_strlen(src); // Calcula la longitud de la cadena src
  destlen = ft_strlen(dest); // Calcula la longitud de la cadena dest

  // Control de errores: si el numero de caracteres a copiar es cero
  if (destsize == 0) {
    return (srclen); // Devuelve la longitud original
  }
  if (destsize < destlen + 1) {
    return (destsize + srclen); // Si no hay suficiente espacio para concatenar las cadenas, devuelve el tamaño total que se necesitaría
  }
  while (src[i] && i < destsize - destlen - 1) { // Mientras haya caracteres en la cadena src y espacio suficiente para concatenar las cadenas,
    dest[destlen + i] = src[i]; // concatena los caracteres
    i++;
  }
  dest[destlen + i] = '\0'; // Agrega el carácter nulo al final de la cadena concatenada
  return (destlen + srclen); // Y devuelve el tamaño total de la cadena concatenada
}

/*
Ejemplo de main para compilar
int main() {
  char str1[50] = "Hola, "; // Primera cadena a concatenar
  char str2[50] = "mundo!"; // Segunda cadena a concatenar
  size_t size = sizeof(str1)/sizeof(str1[0]); // Tamaño del buffer de destino

  printf("Cadena concatenada: %s\n", str1); // Imprime la cadena original
  ft_strlcat(str1, str2, size); // Llama a la función para concatenar las cadenas de forma segura
  printf("Cadena concatenada: %s\n", str1); // Imprime la cadena concatenada

  return 0;
}
*/

/*
Otra forma:
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;

	dstlen = ft_strlen(dst); // Mide y almacena la longitud de dst
	srclen = ft_strlen(src);  // Mide y almacena la longitud de src
	i = 0;

	if (dstsize <= dstlen)  // Si el tamaño del buffer es menor o igual que la longitud de mi destino
		return (srclen += dstsize); // Devuelve la longitud del origen + el tamaño del buffer
	else // Si no,
		srclen += dstlen; // Devuelve la longitud del origen más la longitud del destino
	while (src[i] != '\0' && dstlen < dstsize - 1 && dst != src) // Mientras el origen en la posicion i llege al final y la longitud del destino sea menor al tamaño de buffer menos uno (destino diferente del origen)
	{
		dst[dstlen] = src[i];
		i++;
		dstlen++;
	}
	dst[dstlen] = '\0';
	return (srclen);  // Devuelve la longitud de la cadena que intentó crear en dst
}
*/


