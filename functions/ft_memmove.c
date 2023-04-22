/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clmirand <clmirand@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 11:03:25 by clmirand          #+#    #+#             */
/*   Updated: 2023/04/22 11:42:42 by clmirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Esta función copia n bytes desde la dirección de memoria de src hacia la dirección de memoria de dest, asegurándose de manejar correctamente el solapamiento de los bloques de memoria. En caso de que dest y src se superpongan, se copia desde atrás hacia adelante para evitar sobrescribir datos que aún no se han copiado.
Toma tres argumentos: un puntero al destino, un puntero al origen y el número de bytes que se van a copiar */

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*d; // Puntero de tipo unsigned char para el destino
	unsigned char	*s; // Puntero de tipo unsigned char para el origen

	if (!dst && !src)
		return (dst); // En caso de que ambos punteros sean nulos, retorna el destino
	d = (unsigned char *)dst;
	s = (unsigned char *)src; // Convierte los punteros a unsigned char para que los datos se muevan byte a byte

	if (s <= d) // Si el origen es menor o igual al destino, copia los datos de atrás hacia adelante
	{
		while (n--)
			d[n] = s[n];
	}
	else // Si el origen es mayor que el destino, copia los datos de adelante hacia atrás
	{
		size_t i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst); // Devuelve el puntero dst una vez que se ha completado la copia de memoria
}

/* 
Otra versión usando ft_memcpy(), que es más rápida para el caso de que no haya superposición

void	*ft_memmove(void *dst, const void *src, size_t n)
{
  // Se definen dos punteros d y s como unsigned char, que apuntarán a la dirección de memoria de dst y src, respectivamente
  unsigned char	*d;
  unsigned char	*s;
  d = (unsigned char *)dst;
  s = (unsigned char *)src;

	if (src == NULL && dst == NULL)
		return (NULL); // Si src y dst son NULL, la función devuelve NULL

	if (d >= s) // Si la dirección de memoria de d es mayor o igual que la de s, se copiarán los datos hacia atrás
	{
		while (n--) // Se decrementa n en cada iteración del ciclo hasta que llegue a cero
			d[n] = s[n]; // Copiar elemento a elemento a la inversa (evita la superposición)
	}
	else // Si la dirección de memoria de d es menor que la de s, se copiarán los datos hacia adelante utilizando la función ft_memcpy
		ft_memcpy(d, s, n);
	return (dst); // Devuelve un puntero a dst
}
*/