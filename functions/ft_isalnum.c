/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clmirand <clmirand@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 10:25:03 by clmirand          #+#    #+#             */
/*   Updated: 2023/03/24 19:27:32 by clmirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_isalnum comprueba si el integer corresponde a un carácter alfanumérico en la tabla ASCII, (por eso los rangos de 0 a 9, a a z y A a Z). Es una combinación de ft_isalpha y ft_isdigit; si el integer es alfanumérico (true) devuelve 1, si no (false), devuelve 0 */

int		ft_isalnum(int c)
{
	if (('0' <= c && c <= '9') || ('a' <= c && c <= 'z')
	|| ('A' <= c && c <= 'Z'))
		return (1);
	return (0);
}

/*
Función optimizada eliminando código repetitivo o innecesario:
int ft_isalnum(int c) {
	return ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
*/