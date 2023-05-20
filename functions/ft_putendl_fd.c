/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clmirand <clmirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 18:03:25 by clmirand          #+#    #+#             */
/*   Updated: 2023/05/15 18:42:42 by clmirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Imprime una cadena de caracteres seguida de un carácter de nueva línea en el descriptor de archivo especificado utilizando las funciones ft_putstr_fd y ft_putchar_fd */

void	ft_putendl_fd(char *s, int fd)
{
	// Verifica si el puntero a la cadena es nulo
	if (!s)
		return ;

	// Llama a la función ft_putstr_fd para escribir la cadena en el descriptor de archivo
	ft_putstr_fd(s, fd);
	// Llama a la función ft_putchar_fd para escribir un carácter de nueva línea ('\n') en el descriptor de archivo
	ft_putchar_fd('\n', fd);
}
