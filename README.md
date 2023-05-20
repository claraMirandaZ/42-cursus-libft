<h1 align=center>Libft. Tu primera librería</h1>

Este proyecto consiste en programar una librería en C que contendrá varias de funciones de propósito general en las que se pueden apoyar el resto de programas.

## Tabla de contenidos

- [¿Qué es `Libft`?](#qué-es-libft)
- [¿En qué consiste?](#en-qué-consiste)
- [¿Qué es `Makefile` (y como hacerlo)?](#qué-es-makefile-y-cómo-hacerlo)
- [Listado de funciones](#lista-de-funciones)

 <hr>

### ¿Qué es `Libft`?

`Libc`, también conocida como _biblioteca estándar de C_, es una biblioteca de funciones en lenguaje C que proporciona implementaciones de funciones básicas de este lenguaje, como entrada y salida de archivos, manejo de memoria, manejo de cadenas y funciones matemáticas.
Este proyecto de 42 permite entender la forma en la que actúan estas funciones, así como implementarlas y aprender a utilizarlas.
Creamos así una librería propia, que será muy útil puesto que se podrá utilizar en los siguientes proyectos de C en 42.
Es interesante ir enriqueciendo la `Libft` a lo largo del _cursus_, siempre asegurándonos de que todas las funciones utilizadas son las permitidas en cada proyecto.

Toda la información sobre Libft está detallada en el [pdf del enunciado](./documents/libft-v15-subject-es.pdf), dentro la carpeta `documents`.

### ¿En qué consiste?

1. Instrucciones generales
2. Parte obligatoria
   <br>
   2.1. Consideraciones técnicas
   <br>
   2.2. Funciones de `libc`: algunas de las funciones estándar de C para manipular memoria y strings.
   <br>
   2.3. Funciones adicionales: funciones que, o no son de la librería `libc`, o lo son pero de una forma distinta, que pueden útiles para proyectos posteriores.
3. Parte bonus
   <br>
   Funciones interesantes para la manipulación de listas.

### ¿Qué es [Makefile](./Makefile) (y cómo hacerlo)?

Un fichero `Makefile` es un archivo de texto que describe las instrucciones que debe ejecutar el comando `make`, que lee el archivo y realiza las tareas necesarias para compilar y construir el programa de forma automatizada.
El manual de la GNU recomienda escribirlo con mayúscula porque suele aparecer cerca de otros archivos descriptivos como README, y ha de ser personalizado para adaptarse a las necesidades del proyecto, permitiendo que el desarrollador controle la compilación y construcción de software. También permite la compilación parcial de archivos, de modo que sólo se compilan los archivos que han cambiado desde la última compilación, lo que acelera el proceso de construcción y ahorra tiempo de desarrollo. Esta [playlist de YouTube](https://www.youtube.com/playlist?list=PLTd5ehIj0goOrqKZPvq1Np-8PUFcQSSm-) explica los primeros pasos para crear un Makefile.

## Lista de funciones

|      Funciones de libc      |       Funciones adicionales       | Parte bonus |
| :-------------------------: | :-------------------------------: | :---------: |
| [`ft_isalpha`](#ft_isalpha) |     [`ft_substr`](#ft_substr)     |             |
| [`ft_isdigit`](#ft_isdigit) |    [`ft_strjoin`](#ft_strjoin)    |             |
| [`ft_isalnum`](#ft_isalnum) |    [`ft_strtrim`](#ft_strtrim)    |             |
| [`ft_isascii`](#ft_isascii) |      [`ft_split`](#ft_split)      |             |
| [`ft_isprint`](#ft_isprint) |       [`ft_itoa`](#ft_itoa)       |             |
|  [`ft_strlen`](#ft_strlen)  |    [`ft_strmapi`](#ft_strmapi)    |             |
|  [`ft_memset`](#ft_memset)  |   [`ft_striteri`](#ft_striteri)   |             |
|   [`ft_bzero`](#ft_bzero)   | [`ft_putchar_fd`](#ft_putchar_fd) |             |
|  [`ft_memcpy`](#ft_memcpy)  |                                   |             |
| [`ft_memmove`](#ft_memmove) |                                   |             |
| [`ft_strlcpy`](#ft_strlcpy) |                                   |             |
| [`ft_strlcat`](#ft_strlcat) |                                   |             |
| [`ft_toupper`](#ft_toupper) |                                   |             |
| [`ft_tolower`](#ft_tolower) |                                   |             |
|  [`ft_strchr`](#ft_strchr)  |                                   |             |
| [`ft_strrchr`](#ft_strrchr) |                                   |             |
| [`ft_strncmp`](#ft_strncmp) |                                   |             |
|  [`ft_memchr`](#ft_memchr)  |                                   |             |
|  [`ft_memcmp`](#ft_memcmp)  |                                   |             |
| [`ft_strnstr`](#ft_strnstr) |                                   |             |
|    [`ft_atoi`](#ft_atoi)    |                                   |             |
|  [`ft_calloc`](#ft_calloc)  |                                   |             |
|  [`ft_strdup`](#ft_strdup)  |                                   |             |

<br>

### [ft_isalpha](./functions/ft_isalpha.c)

|                 Descripción                 |                            Valor retornado                             |
| :-----------------------------------------: | :--------------------------------------------------------------------: |
| Comprueba si un carácter es alfabético o no | Devuelve 1 si es `true` (alfabético) o 0 si es `false` (no alfabético) |

### [ft_isdigit](./functions/ft_isdigit.c)

|              Descripción              |                   Valor retornado                    |
| :-----------------------------------: | :--------------------------------------------------: |
| Comprueba si un carácter es un dígito | Devuelve 1 si es `true` (numérico) o 0 si es `false` |

### [ft_isalnum](./functions/ft_isalnum.c)

|                                      Descripción                                      |                     Valor retornado                      |
| :-----------------------------------------------------------------------------------: | :------------------------------------------------------: |
| Comprueba si un carácter es alfanumérico (combinación de `ft_isalpha` y `ft_isdigit`) | Devuelve 1 si es `true` (alfanumérico) o 0 si es `false` |

### [ft_isascii](./functions/ft_isascii.c)

|                             Descripción                              |              Valor retornado              |
| :------------------------------------------------------------------: | :---------------------------------------: |
| Comprueba si un carácter es ASCII, cuyo rango es 0 a 127 (inclusive) | Devuelve 1 si es `true` o 0 si es `false` |

### [ft_isprint](./functions/ft_isprint.c)

|                         Descripción                         |              Valor retornado              |
| :---------------------------------------------------------: | :---------------------------------------: |
| Comprueba si un carácter es imprimible (incluye el espacio) | Devuelve 1 si es `true` o 0 si es `false` |

### [ft_strlen](./functions/ft_strlen.c)

|                    Descripción                     |         Valor retornado         |
| :------------------------------------------------: | :-----------------------------: |
| Calcula la longitud de una cadena apuntada por str | Devuelve la longitud del string |

### [ft_memset](./functions/ft_memset.c)

|                 Descripción                  |                Valor retornado                 |
| :------------------------------------------: | :--------------------------------------------: |
| Llena un bloque de memoria con un valor dado | Devuelve un puntero al área de memoria llenada |

### [ft_bzero](./functions/ft_bzero.c)

|              Descripción              |                 Valor retornado                 |
| :-----------------------------------: | :---------------------------------------------: |
| Establece un bloque de memoria a cero | No devuelve nada (su tipo de retorno es `void`) |

### [ft_memcpy](./functions/ft_memcpy.c)

|                                         Descripción                                          |          Valor retornado          |
| :------------------------------------------------------------------------------------------: | :-------------------------------: |
| Copia n bytes del área de memoria src a la memoria de dst. Estas áreas no deben superponerse | Un puntero a la cadena de destino |

### [ft_memmove](./functions/ft_memmove.c)

|                                   Descripción                                   |          Valor retornado          |
| :-----------------------------------------------------------------------------: | :-------------------------------: |
| Copia len bytes de la memoria de src a la memoria de dst, pudiendo superponerse | Un puntero a la cadena de destino |

### [ft_strlcpy](./functions/ft_strlcpy.c)

|                                             Descripción                                              |         Valor retornado          |
| :--------------------------------------------------------------------------------------------------: | :------------------------------: |
| Copia la cadena a la que apunta src, incluido el byte nulo de terminación, al búfer señalado por dst | La longitud de la cadena a crear |

### [ft_strlcat](./functions/ft_strlcat.c)

|                Descripción                 |                            Valor retornado                            |
| :----------------------------------------: | :-------------------------------------------------------------------: |
| Concatena dos cadenas, src al final de dst | Devuelve el tamaño total de la cadena dst después de la concatenación |

### [ft_toupper](./functions/ft_toupper.c)

|            Descripción            |                                 Valor retornado                                 |
| :-------------------------------: | :-----------------------------------------------------------------------------: |
| Convierte un carácter a mayúscula | Devuelve el carácter en mayúscula, a menos que ya lo sea, que lo devuelve igual |

### [ft_tolower](./functions/ft_tolower.c)

|            Descripción            |                                 Valor retornado                                 |
| :-------------------------------: | :-----------------------------------------------------------------------------: |
| Convierte un carácter a minúscula | Devuelve el carácter en minúscula, a menos que ya lo sea, que lo devuelve igual |

### [ft_strchr](./functions/ft_strchr.c)

|                       Descripción                       |                                         Valor retornado                                          |
| :-----------------------------------------------------: | :----------------------------------------------------------------------------------------------: |
| Busca la primera aparición de un carácter en una cadena | Devuelve un puntero a la primera aparición del carácter en la cadena, o NULL, si no lo encuentra |

### [ft_strrchr](./functions/ft_strrchr.c)

|                      Descripción                       |                                         Valor retornado                                         |
| :----------------------------------------------------: | :---------------------------------------------------------------------------------------------: |
| Busca la última aparición de un carácter en una cadena | Devuelve un puntero a la última aparición del carácter en la cadena, o NULL, si no lo encuentra |

### [ft_strncmp](./functions/ft_strncmp.c)

|                   Descripción                    |                                                     Valor retornado                                                      |
| :----------------------------------------------: | :----------------------------------------------------------------------------------------------------------------------: |
| Compara los primeros n caracteres de dos cadenas | Devuelve un número negativo, cero o positivo, dependiendo de si la primera cadena es menor, igual o mayor que la segunda |

### [ft_memchr](./functions/ft_memchr.c)

|                            Descripción                             |                                              Valor retornado                                              |
| :----------------------------------------------------------------: | :-------------------------------------------------------------------------------------------------------: |
| Busca la primera aparición de un carácter en una cadena de memoria | Un puntero a la posición de la memoria en la que se encuentra el valor buscado, o NULL si no se encuentra |

### [ft_memcmp](./functions/ft_memcmp.c)

|                                    Descripción                                    |                                         Valor retornado                                          |
| :-------------------------------------------------------------------------------: | :----------------------------------------------------------------------------------------------: |
| Compara los primeros n bytes de los bloques de memoria apuntados por dos punteros | Un valor entero que indica la diferencia en ASCII entre los bloques de memoria, o cero si no hay |

### [ft_strnstr](./functions/ft_strnstr.c)

|                                                           Descripción                                                           |                                           Valor retornado                                           |
| :-----------------------------------------------------------------------------------------------------------------------------: | :-------------------------------------------------------------------------------------------------: |
| Busca la primera aparición de una subcadena _aguja_ dentro de una cadena más grande _pajar_ un número máximo indicado por `len` | Devuelve un puntero al comienzo de la _aguja_ en el _pajar_, o NULL si no se encuentra la subcadena |

### [ft_atoi](./functions/ft_atoi.c)

|                                    Descripción                                    |                                 Valor retornado                                 |
| :-------------------------------------------------------------------------------: | :-----------------------------------------------------------------------------: |
| Convierte la parte inicial de la cadena apuntada por str a una representación int | Si tiene éxito, devuelve el valor convertido a int con el signo correspondiente |

### [ft_calloc](./functions/ft_calloc.c)

|                                              Descripción                                              |                           Valor retornado                           |
| :---------------------------------------------------------------------------------------------------: | :-----------------------------------------------------------------: |
| Asigna memoria dinámicamente y reserva un bloque de memoria contigua, y luego lo inicializa con ceros | El puntero que apunta al bloque de memoria reservado e inicializado |

### [ft_strdup](./functions/ft_strdup.c)

|                                       Descripción                                       |                 Valor retornado                 |
| :-------------------------------------------------------------------------------------: | :---------------------------------------------: |
| Crea una copia de una cadena de caracteres dada y devuelve un puntero a la nueva cadena | Devuelve un puntero a la cadena recién asignada |

<hr>

### [ft_substr](./functions/ft_substr.c)

|                                                                         Descripción                                                                         |                                                                            Valor retornado                                                                             |
| :---------------------------------------------------------------------------------------------------------------------------------------------------------: | :--------------------------------------------------------------------------------------------------------------------------------------------------------------------: |
| Recibe una cadena, un índice y una longitud y su objetivo es devolver una subcadena de la original que empieza en su mismo índice y tiene la misma longitud | Si el índice está fuera de los límites de la cadena original, se devuelve otra vacía. Si no se puede asignar memoria para la nueva cadena, se devuelve un puntero nulo |

### [ft_strjoin](./functions/ft_strjoin.c)

|                                 Descripción                                 |              Valor retornado               |
| :-------------------------------------------------------------------------: | :----------------------------------------: |
| Concatena dos cadenas de caracteres para crear una nueva que contiene ambas | Devuelve un puntero a la cadena resultante |

### [ft_strtrim](./functions/ft_strtrim.c)

|                                                                                 Descripción                                                                                  |                                        Valor retornado                                         |
| :--------------------------------------------------------------------------------------------------------------------------------------------------------------------------: | :--------------------------------------------------------------------------------------------: |
| Elimina todos los caracteres que se encuentran al principio y al final de la cadena `s1` que coinciden con cualquiera de los caracteres que se encuentran en la cadena `set` | Devuelve una subcadena de `s1` que comienza en el índice `i` y tiene una longitud de `len - i` |

### [ft_split](./functions/ft_split.c)

|                              Descripción                               |                       Valor retornado                       |
| :--------------------------------------------------------------------: | :---------------------------------------------------------: |
| Divide una cadena en subcadenas más pequeñas utilizando un delimitador | Devuelve un array de cadenas con las subcadenas resultantes |

### [ft_itoa](./functions/ft_itoa.c)

|                                                  Descripción                                                  |                              Valor retornado                               |
| :-----------------------------------------------------------------------------------------------------------: | :------------------------------------------------------------------------: |
| Convierte un número entero en una cadena de caracteres (utilizando malloc para asignar memoria dinámicamente) | Devuelve la string que representa ese valor entero recibido como argumento |

### [ft_strmapi](./functions/ft_strmapi.c)

|                                        Descripción                                        |                         Valor retornado                          |
| :---------------------------------------------------------------------------------------: | :--------------------------------------------------------------: |
| A cada carácter de un string `s` le aplica una función `f`, transformándola completamente | Genera una nueva string con el resultado del uso sucesivo de `f` |

### [ft_striteri](./functions/ft_striteri.c)

|                                                               Descripción                                                               |                       Valor retornado                       |
| :-------------------------------------------------------------------------------------------------------------------------------------: | :---------------------------------------------------------: |
| Aplica una función `f` a cada carácter de una cadena `s` en función de su índice, o sea que los cambios se realizan directamente en `s` | No devuelve ningún valor, ya que su tipo de retorno es void |

### [ft_putchar_fd](./functions/ft_putchar_fd.c)

|                       Descripción                       |                       Valor retornado                       |
| :-----------------------------------------------------: | :---------------------------------------------------------: |
| Envía el carácter `c` al _file descriptor_ especificado | No devuelve ningún valor, ya que su tipo de retorno es void |
