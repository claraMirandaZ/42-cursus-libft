/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clmirand <clmirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 16:03:25 by clmirand          #+#    #+#             */
/*   Updated: 2023/05/15 16:42:42 by clmirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_putchar_fd se encarga de escribir un carácter c en un descriptor de archivo fd.
La función write se usa para escribir en dicho descriptor de archivo. Recibe los siguientes parámetros: el descriptor de archivo (fd), un puntero al carácter a escribir (&c), y el tamaño del dato a escribir (en este caso, 1, ya que se va a escribir un solo carácter) */

void ft_putchar_fd(char c, int fd)
{
	if (fd >= 0) // Primero nos aseguramos de que fd es válido
		write (fd, &c, 1);
}