/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clmirand <clmirand@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 12:03:25 by clmirand          #+#    #+#             */
/*   Updated: 2023/05/08 12:42:42 by clmirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* La función ft_atoi convierte una cadena de caracteres (que representa un número) en su valor entero correspondiente y lo devuelve */

int	ft_atoi(const char *str)
{
	long num; // Variable que almacenará el número final
	int sign; // Variable que indica si el número es positivo o negativo

	num = 0;
	sign = 1;

	if (!(*str)) // Si la cadena está vacía, devuelve 0
		return (0);

	while (*str == 32 || (*str >= 9 && *str <= 13)) // Si hay espacios, avanza en la cadena
		str++;

	if (*str == '-' || *str == '+') // Si encuentra un signo, actualiza el valor de sign...
	{
		if (*str == '-')
			sign = -1;
		str++; // ...y avanza en la cadena
	}

	while (*str && (*str >= '0' && *str <= '9')) // Mientras encuentre un número
	{
		num = (*str - 48) + (num * 10); // Actualiza el valor de num
		if (num > 2147483647 && sign == 1) // Si el número es mayor al máximo permitido y es positivo,
			return (-1); // retorna -1
		else if (num > 2147483648 && sign == -1) // Pero si el número es mayor al máximo permitido y es negativo,
			return (0); // retorna 0
		str++; // Y avanza en la cadena
	}
	return (num * sign); // Retorna el número multiplicado por el signo correspondiente
}

/*
Otra forma de enfocar esta función es:
int	ft_atoi(const char *str)
{
	int	num; // Para almacenar el resultado
	int	sign; // Para el signo de la cadena (positivo o negativo)

	num = 0; // Inicializa el resultado a cero
	sign = 1; // Inicializa el signo como positivo

	while (*str == 32 || (*str >= 9 && *str <= 13)) // Verifica si hay espacios en blanco, tabulaciones o saltos de línea
	{
		str++; // Avanza al siguiente carácter
	}
	if (*str == '-') // Verifica si el primer carácter después de los espacios en blanco es un signo negativo
	{
		sign *= -1; // Cambia el signo a negativo
		str++; // Avanza al siguiente carácter
	}
	if (*str == '-' || *str == '+') //  Verifica si hay un signo al principio de la cadena
	{
		str++; // Avanza al siguiente carácter
	}
	while (*str >= '0' && *str <= '9') // Mientras el carácter actual sea un número
	{
		num = num * 10 + *str - '0'; // Convierte el carácter a su valor numérico y lo agrega al resultado
		str++; // Avanza al siguiente carácter
	}
	return (num * sign); // Devuelve el resultado con el signo correspondiente
}
*/
