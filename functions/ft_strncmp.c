/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clmirand <clmirand@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 19:03:25 by clmirand          #+#    #+#             */
/*   Updated: 2023/05/05 19:42:42 by clmirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* La función ft_strncmp compara los primeros n caracteres de dos cadenas de caracteres (str1 y str2) y devuelve un número negativo, cero o positivo, dependiendo de si str1 es menor, igual o mayor que str2, respectivamente */

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned int	i;  // Variable para contar el número de caracteres comparados

	i = 0;  // Inicializar el contador en 0

	while ((str1[i] != '\0' || str2[i] != '\0') && i < n)  // Mientras no lleguemos al final de una de las cadenas o hayamos comparado los primeros n caracteres
	{
		if (str1[i] != str2[i])  // Si se encuentra un carácter diferente entre las dos
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);  // Se retorna la diferencia numérica entre los códigos ASCII de ambos
		i++;  // Y avanzamos al siguiente carácter
	}
	return (0);  // Si las cadenas son iguales, retornamos 0
}

/*
Otra forma de hacerlo:
int    ft_strncmp(const char *str1, const char *str2, size_t n)
{
    while ((*str1 == *str2) && n && *str1 && *str2)
    {
        str1++;
        str2++;
        n--;
    }
    if (n == 0)
        return (0);
    return ((unsigned char)*str1 - (unsigned char)*str2);
}
*/