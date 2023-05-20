/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clmirand <clmirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 20:03:25 by clmirand          #+#    #+#             */
/*   Updated: 2023/05/15 20:42:42 by clmirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* La función ft_putnbr_fd imprime un número entero en el descriptor de archivo especificado utilizando recursividad y la función ft_putchar_fd. En este caso, maneja casos especiales para el valor mínimo de un entero y números negativos */

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648) // Si el número es igual a -2147483648,
	{
		ft_putchar_fd('-', fd); // imprime el signo negativo utilizando ft_putchar_fd
		ft_putchar_fd('2', fd); // Luego imprime el número 2

		ft_putnbr_fd(147483648, fd); // Y llama a la función ft_putnbr_fd con el número 147483648 (valor absoluto de -2147483648) para imprimir el resto del número
	}
	else if (n < 0) // Si el número es cualquier otro negativo,
	{
		ft_putchar_fd('-', fd); // imprime el signo negativo usando ft_putchar_fd
		ft_putnbr_fd(-n, fd); // Llama a ft_putnbr_fd con el valor absoluto de n para imprimir el resto del número
	}
	else if (n > 9) // Verifica si el número tiene más de una cifra
	{
		ft_putnbr_fd(n / 10, fd); // En cuyo caso divide el número entre 10 y se llama a ft_putnbr_fd para imprimir la parte entera del número
		ft_putnbr_fd(n % 10, fd); // Luego se calcula el módulo 10 del número y se llama a ft_putnbr_fd para imprimir el dígito más a la derecha del número
	}
	else
	{
		ft_putchar_fd(n + '0', fd); // Si el número es un solo dígito, se imprime directamente utilizando ft_putchar_fd
	}
}

/*
void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}
*/