/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clmirand <clmirand@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 10:03:25 by clmirand          #+#    #+#             */
/*   Updated: 2023/05/05 10:42:42 by clmirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Convierte un carácter a mayúsculas */

int	ft_toupper(int c) // La función toma como argumento un entero que representa un carácter ASCII
{
	if (c > 96 && c < 123) // Si el carácter es una letra minúscula
		return (c - 32); // Se convierte a mayúscula restando 32 a su valor ASCII
	return (c); // Si no es una minúscula, se retorna el carácter tal cual
}

/*
En la tabla ASCII, las letras mayúsculas y minúsculas tienen valores de caracteres consecutivos, lo que significa que la diferencia de valores entre una letra mayúscula y su correspondiente letra minúscula es constante. En particular, la diferencia es de 32 unidades. Por lo tanto, si se tiene un carácter minúscula y se desea convertirlo en su equivalente en mayúscula, se puede restar 32 a su valor ASCII para obtener la letra mayúscula correspondiente.
*/