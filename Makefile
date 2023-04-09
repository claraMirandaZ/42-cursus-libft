# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clmirand <clmirand@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/20 10:03:25 by clmirand          #+#    #+#              #
#    Updated: 2023/03/28 10:42:42 by clmirand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nombre del fichero librería que será generado por el Makefile
NAME = libft.a

# Ficheros fuente (sources)
SRCS = ft_isalpha.c\

# Variable CC con el nombre del compilador a utilizar
CC = gcc

# Variable con los flags que se pasarán al compilador
CCFLAGS = -Wall -Werror -Wextra

# Variable con la orden para eliminar ficheros y directorios
RM = rm -rf

## El flag `r` indica los directorios que se eliminarán de forma recursiva y la `f` indica que no se deberá requerir confirmación.

# Variable OBJS para convertir los archivos con extensión .c en .o
OBJS = $(SRCS:.c=.o)

# Creación del ejecutable
$(NAME) : $(OBJS)
	@ar crs $(NAME) $(OBJS)

# Regla para decirle a Make cómo generar objetos desde los ficheros listados en la variable SRCS
%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@ 

## `%` como comodín para los nombres de los ficheros, y el sufijo .c.o indican que esta regla aplica a todos los ficheros con extensión .c que generan ficheros .o
##	$< y $@		https://www.gnu.org/software/make/manual/make.html#Automatic-Variables

# Phony targets: definición de acciones para p. ej. eliminar, crear o testear
.PHONY: all clean fclean re

# Phony `all` para que `make all` cree el ejecutable $(NAME)
all: $(NAME)

# Phony target `clean` que no genera un fichero real sino que realiza una tarea (limpieza). El `@` hace que el comando `$(RM)` no se escriba en la consola
clean:
	@$(RM) $(OBJS)

# Eliminar el objetivo `clean` que se genera al compilar (se ejecuta `clean` antes que `fclean`)
fclean: clean
	@rm -f $(NAME)

## Otra sintaxis usaría la variable `RM` declarada arriba y {} en lugar de () 
## ${RM} ${NAME}

# Phony `re` que primero ejecuta `fclean` y luego, `all` para que al ejecutar `make re` primero elimina todo y luego lo crea de nuevo
re: fclean all