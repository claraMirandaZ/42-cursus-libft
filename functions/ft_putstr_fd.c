/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clmirand <clmirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 16:03:25 by clmirand          #+#    #+#             */
/*   Updated: 2023/05/15 16:42:42 by clmirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* La función ft_putstr_fd imprime una cadena de caracteres en un descriptor de archivo válido, carácter por carácter, hasta llegar al final de la cadena o si el descriptor de archivo es inválido */

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;

	// Verifica si la cadena de caracteres es nula, lo primero
	if (!s)
		return ;

	// Recorre la cadena de caracteres hasta llegar al final (carácter nulo '\0') o si el descriptor de archivo es inválido
	while (s[i] && fd >= 0)
	{
		// Llama a la función ft_putchar_fd para escribir el carácter actual en el descriptor de archivo.
		ft_putchar_fd(s[i], fd);
		i++;
	}
}


/*
También se puede usar write
void	ft_putstr_fd(char *s, int fd)
{
	int	len;

	len = 0;

	// Calcula la longitud de la cadena contando los caracteres hasta encontrar el carácter nulo
	while (s[len] != '\0')
		len++;

	// Escribe la cadena en el descriptor de archivo utilizando la función write()
	write(fd, s, len);
}
*/