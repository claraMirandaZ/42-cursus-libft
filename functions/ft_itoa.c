/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clmirand <clmirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 12:03:25 by clmirand          #+#    #+#             */
/*   Updated: 2023/05/15 12:42:42 by clmirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Esta función hace lo contrario a ft_atoi; convierte un número entero en una cadena de caracteres y devuelve un puntero a esa cadena */

/* La función auxiliar ft_size calcula el tamaño necesario para almacenar la cadena de caracteres que representa el número entero nb */
int	ft_size(int nb)
{
	int	i;

	i = 0;
	if (nb == -2147483648) // Comprueba el caso especial cuando nb es igual al mínimo número posible
		return (i + 11); // Devuelve el número de dígitos
	
	// Comprueba el caso especial cuando nb es igual a 0 y devuelve el tamaño correspondiente
	if (nb == 0) // Si nb es cero,
		return (i + 1); // devuelve 1
	if (nb < 0) // Si nb es negativo,
		i++; // añadimos 1 para contabilizar el signo negativo

	while (nb) // Mientras nb sea diferente de cero
	{
		nb /= 10; // Divide nb por 10 en cada iteración, eliminando el dígito menos significativo 
		i++; // Añadimos uno al contador
	}
	return (i); // Devolvemos el número de dígitos que tiene el número
}

/* La función auxiliar ft_putnbr se encarga de asignar los dígitos de nb a la cadena ptr  */
void	ft_putnbr(char *ptr, int nb, int size)
{
	int	limit;

	limit = 0; // Inicializa limit en 0
	ptr[size] = '\0'; // Y establece el carácter nulo '\0' al final de la cadena.
	
	if (nb == -2147483648) // Si nb es el caso especial de ser igual a -2147483648
	{
		ptr[limit++] = '-'; // Coloca el signo negativo en la posición inicial de la cadena dentro de ptr
		ptr[limit++] = '2'; // Coloca el primer dígito, 2, en la siguiente posición de ptr
		nb = 147483648; // Asigna el valor 147483648 a nb para continuar la conversión
	}

	if (nb < 0) // Si nb es negativo (pero no es -2147483648 xD),
	{
		ptr[limit++] = '-'; // coloca el signo negativo en la posición inicial de la cadena
		nb *= -1; // Convierte nb a positivo multiplicándolo por -1
	}
	while (size > limit) // Asigna los dígitos en la cadena de forma inversa, comenzando desde la posición size-1
	{
		ptr[--size] = nb % 10 + 48; // Obtiene los dígitos de dcha a izqda y los va colocando en la posición size-1
    // Suma 48 para convertir el dígito numérico en su equivalente carácter ASCII
		nb /= 10; // Dividiendo nb por 10 para pasar al siguiente dígito
	}
}

char	*ft_itoa(int nb)
{
	char	*ptr;
	int		size;

	size = ft_size(nb); // Guardamos en size lo que nos ha dado ft_size
	ptr = NULL; // Inicializamos el puntero
	ptr = malloc((size + 1) * sizeof(char)); // Reserva memoria para la cadena, incluyendo espacio para el carácter nulo (por eso size + 1)

	if (!ptr)
		return (0); // Si la asignación de memoria falla, se devuelve un puntero nulo

	ft_putnbr(ptr, nb, size); // Convierte nb a una cadena de caracteres y la guarda en ptr
	return (ptr); // Devuelve la cadena resultante
}
