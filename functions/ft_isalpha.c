/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clmirand <clmirand@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 10:03:25 by clmirand          #+#    #+#             */
/*   Updated: 2023/03/22 10:42:42 by clmirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include 'libft.h'

/* ft_isalpha comprueba si un caracter es alfabético, devolviendo 1 si lo es y 0 si no */

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) // ¿Es un caracter alfabético (está entre A y Z o a y z de la tabla ASCII)?
		return (1); // Si es true, devuelve 1
	return (0); // Si es false, devuelve 0
}

/* 
Función optimizada eliminando código repetitivo o innecesario:

int ft_isalpha(int c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}
*/