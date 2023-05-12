/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clmirand <clmirand@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 09:25:03 by clmirand          #+#    #+#             */
/*   Updated: 2023/03/24 19:27:12 by clmirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_isdigit comprueba si un carácter es numérico, devolviendo 1 si lo es y 0 si no */

int ft_isdigit(int c)
{
  if ('0' <= c && c <= '9') // ¿Es un carácter numérico (está entre 0 y 9 de la tabla ASCII)?
    return (1); // Si true, devuelve 1
  return (0); // Si false, devuelve 0
}

/* 
Función completa con el if/else:
int ft_isdigit(int c) {
  if (c >= '0' && c <= '9') {
    return 1;
  } else {
    return 0;
  }
}
*/

/*
Función optimizada eliminando código repetitivo o innecesario:
int ft_isdigit(int c) {
  return (c >= '0' && c <= '9');
}
*/