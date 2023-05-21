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

|     Funciones de libc     |      Funciones adicionales      |   Parte bonus   |
| :-----------------------: | :-----------------------------: | :-------------: |
| [ft_isalpha](#ft_isalpha) |     [ft_substr](#ft_substr)     |    ft_lstnew    |
| [ft_isdigit](#ft_isdigit) |    [ft_strjoin](#ft_strjoin)    | ft_lstadd_front |
| [ft_isalnum](#ft_isalnum) |    [ft_strtrim](#ft_strtrim)    |   ft_lstsize    |
| [ft_isascii](#ft_isascii) |      [ft_split](#ft_split)      |   ft_lstlast    |
| [ft_isprint](#ft_isprint) |       [ft_itoa](#ft_itoa)       | ft_lstadd_back  |
|  [ft_strlen](#ft_strlen)  |    [ft_strmapi](#ft_strmapi)    |  ft_lstdelone   |
|  [ft_memset](#ft_memset)  |   [ft_striteri](#ft_striteri)   |   ft_lstclear   |
|   [ft_bzero](#ft_bzero)   | [ft_putchar_fd](#ft_putchar_fd) |   ft_lstiter    |
|  [ft_memcpy](#ft_memcpy)  |  [ft_putstr_fd](#ft_putstr_fd)  |    ft_lstmap    |
| [ft_memmove](#ft_memmove) | [ft_putendl_fd](#ft_putendl_fd) |                 |
| [ft_strlcpy](#ft_strlcpy) |  [ft_putnbr_fd](#ft_putnbr_fd)  |                 |
| [ft_strlcat](#ft_strlcat) |                                 |                 |
| [ft_toupper](#ft_toupper) |                                 |                 |
| [ft_tolower](#ft_tolower) |                                 |                 |
|  [ft_strchr](#ft_strchr)  |                                 |                 |
| [ft_strrchr](#ft_strrchr) |                                 |                 |
| [ft_strncmp](#ft_strncmp) |                                 |                 |
|  [ft_memchr](#ft_memchr)  |                                 |                 |
|  [ft_memcmp](#ft_memcmp)  |                                 |                 |
| [ft_strnstr](#ft_strnstr) |                                 |                 |
|    [ft_atoi](#ft_atoi)    |                                 |                 |
|  [ft_calloc](#ft_calloc)  |                                 |                 |
|  [ft_strdup](#ft_strdup)  |                                 |                 |

<br>

### [ft_isalpha](./functions/ft_isalpha.c)

Prototipo `int	ft_isalpha(int c);`

|                 Descripción                 |                            Valor retornado                             |
| :-----------------------------------------: | :--------------------------------------------------------------------: |
| Determina si un carácter es alfabético o no | Devuelve 1 si es `true` (alfabético) o 0 si es `false` (no alfabético) |

> La función `isalpha` pertenece a la biblioteca estándar de C `ctype.h`.

<br>

### [ft_isdigit](./functions/ft_isdigit.c)

Prototipo `int	ft_isdigit(int c);`

|                               Descripción                                |                          Valor retornado                           |
| :----------------------------------------------------------------------: | :----------------------------------------------------------------: |
| Comprueba si un carácter es un dígito numérico del sistema decimal (0-9) | Devuelve 1 si es `true` (numérico) o 0 si es `false` (no numérico) |

> La función original `isdigit` pertenece a la biblioteca estándar de C `ctype.h`.

<br>

### [ft_isalnum](./functions/ft_isalnum.c)

Prototipo `int	ft_isalnum(int c);`

|                                                   Descripción                                                    |                     Valor retornado                      |
| :--------------------------------------------------------------------------------------------------------------: | :------------------------------------------------------: |
| Comprueba si un carácter es alfanumérico, es decir, si es una letra (mayúscula o minúscula) o un dígito numérico | Devuelve 1 si es `true` (alfanumérico) o 0 si es `false` |

> La función `isalnum` pertenece a la biblioteca estándar de C `ctype.h`. <br>
> Es una combinación de `ft_isalpha` y `ft_isdigit`.

<br>

### [ft_isascii](./functions/ft_isascii.c)

Prototipo `int	ft_isascii(int c);`

|                                     Descripción                                      |                Valor retornado                 |
| :----------------------------------------------------------------------------------: | :--------------------------------------------: |
| Comprueba si un carácter es un valor ASCII válido, cuyo rango es 0 a 127 (inclusive) | Devuelve un entero; 1 si `true` o 0 si `false` |

> La función `isascii` pertenece a la biblioteca estándar de C `ctype.h`.

<br>

### [ft_isprint](./functions/ft_isprint.c)

Prototipo `int	ft_isprint(int c);`

|                         Descripción                         |                   Valor retornado                    |
| :---------------------------------------------------------: | :--------------------------------------------------: |
| Comprueba si un carácter es imprimible (incluye el espacio) | Devuelve un entero; 1 si es `true` o 0 si es `false` |

> La función `isprint` pertenece a la biblioteca estándar de C `ctype.h`.

<br>

### [ft_strlen](./functions/ft_strlen.c)

Prototipo `size_t	ft_strlen(const char *str);`

|                            Descripción                             |                                                                           Valor retornado                                                                           |
| :----------------------------------------------------------------: | :-----------------------------------------------------------------------------------------------------------------------------------------------------------------: |
| Calcula la longitud de una cadena de caracteres apuntada por `str` | Devuelve la longitud del string; pues el tipo de retorno es `size_t`, que es un tipo entero sin signo, utilizado para representar tamaños y cantidades no negativas |

> La función original `strlen` pertenece a la biblioteca estándar de C `string.h`.

<br>

### [ft_memset](./functions/ft_memset.c)

Prototipo `void *ft_memset(void *s, int c, size_t n);`

|                    Descripción                     |                Valor retornado                 |
| :------------------------------------------------: | :--------------------------------------------: |
| Llena un bloque de memoria con un valor específico | Devuelve un puntero al área de memoria llenada |

> La función original `memset` pertenece a la biblioteca estándar de C `string.h`.

<br>

### [ft_bzero](./functions/ft_bzero.c)

Prototipo `void	ft_bzero(void *s, size_t n);`

|                                                         Descripción                                                         |                                                              Valor retornado                                                              |
| :-------------------------------------------------------------------------------------------------------------------------: | :---------------------------------------------------------------------------------------------------------------------------------------: |
| Se utiliza para establecer los primeros `n` bytes de un bloque de memoria a cero (es decir, llenarlos con el valor ASCII 0) | No devuelve ningún valor, ya que modifica directamente el contenido del bloque de memoria apuntado por `s` (su tipo de retorno es `void`) |

> La función `bzero` se encuentra en la biblioteca BSD `strings.h`. <br>
> Tanto `bzero` como `memset` son funciones similares, pero `bzero` está obsoleta y se recomienda usar `memset` en su lugar.

<br>

### [ft_memcpy](./functions/ft_memcpy.c)

Prototipo `void	*ft_memccpy(void *dest, const void *src, size_t n);`

|                                                Descripción                                                |             Valor retornado              |
| :-------------------------------------------------------------------------------------------------------: | :--------------------------------------: |
| Copia `n` bytes del área de memoria desde una ubicación de origen `src` a una ubicación de destino `dest` | Un puntero a la cadena de destino `dest` |

> La función `memcpy` pertenece a la biblioteca estándar de C `string.h`. <br>
> Se ha de tener en cuenta que `ft_memcpy` asume que los bloques de memoria `dest` y `src` no se superponen. Si esto sucede, se recomienda utilizar `ft_memmove` en su lugar, ya que garantiza un comportamiento seguro incluso si hay superposición.

<br>

### [ft_memmove](./functions/ft_memmove.c)

Prototipo `void	*ft_memmove(void *dest, const void *src, size_t n);`

|                                     Descripción                                      |              Valor retornado               |
| :----------------------------------------------------------------------------------: | :----------------------------------------: |
| Copia `n` bytes de la memoria de `src` a la memoria de `dest`, pudiendo superponerse | Devuelve un puntero a la cadena de destino |

> La función original `memmove` pertenece a la biblioteca estándar de C `string.h`. <br>
> Se recomienda utilizar `ft_memmove` en lugar de `ft_memcpy` cuando se trabaje con bloques de memoria que puedan superponerse, ya que garantiza un comportamiento correcto en esas situaciones.

<br>

### [ft_strlcpy](./functions/ft_strlcpy.c)

Prototipo `size_t	ft_strlcpy(char *dest, const char *src, size_t size);`

|                                                                                Descripción                                                                                 |                                               Valor retornado                                                |
| :------------------------------------------------------------------------------------------------------------------------------------------------------------------------: | :----------------------------------------------------------------------------------------------------------: |
| Copia la cadena a la que apunta `src`, incluido el byte nulo de terminación, al búfer señalado por `dest`, asegurando que no se desborde el tamaño especificado por `size` | Devuelve el tamaño de la cadena que se habría copiado completamente (la longitud de `src`), sin incluir `\0` |

> La función original `strlcpy` pertenece a la biblioteca estándar de C `string.h`.

<br>

### [ft_strlcat](./functions/ft_strlcat.c)

Prototipo `size_t ft_strlcat(char *dest, const char *src, size_t size);`

|                  Descripción                   |                            Valor retornado                            |
| :--------------------------------------------: | :-------------------------------------------------------------------: |
| Concatena dos cadenas, `src` al final de `dst` | Devuelve el tamaño total de la cadena dst después de la concatenación |

> La función `strlcat` pertenece a la biblioteca estándar de C `string.h`.

<br>

### [ft_toupper](./functions/ft_toupper.c)

Prototipo `int	ft_toupper(int c);`

|            Descripción            |                                 Valor retornado                                 |
| :-------------------------------: | :-----------------------------------------------------------------------------: |
| Convierte un carácter a mayúscula | Devuelve el carácter en mayúscula, a menos que ya lo sea, que lo devuelve igual |

> La función `toupper` pertenece a la biblioteca estándar de C `ctype.h`.

<br>

### [ft_tolower](./functions/ft_tolower.c)

Prototipo `int	ft_tolower(int c);`

|            Descripción            |                                 Valor retornado                                 |
| :-------------------------------: | :-----------------------------------------------------------------------------: |
| Convierte un carácter a minúscula | Devuelve el carácter en minúscula, a menos que ya lo sea, que lo devuelve igual |

> La función `tolower` pertenece a la biblioteca estándar de C `ctype.h`.

<br>

### [ft_strchr](./functions/ft_strchr.c)

Prototipo `char	*ft_strchr(const char *str, int c);`

|                                  Descripción                                   |                                              Valor retornado                                              |
| :----------------------------------------------------------------------------: | :-------------------------------------------------------------------------------------------------------: |
| Busca la _primera_ aparición de un carácter `c` dentro de una una cadena `str` | Devuelve un puntero a la _primera_ aparición de dicho carácter en la cadena, o `NULL`, si no lo encuentra |

> La función original (`strchr`) se encuentra en la biblioteca estándar de C `string.h`.

<br>

### [ft_strrchr](./functions/ft_strrchr.c)

Prototipo `char	*ft_strrchr(const char *str, int c);`

|                       Descripción                        |                                           Valor retornado                                           |
| :------------------------------------------------------: | :-------------------------------------------------------------------------------------------------: |
| Busca la _última_ aparición de un carácter en una cadena | Devuelve un puntero a la _última_ aparición del carácter en la cadena, o `NULL`, si no lo encuentra |

> La función `strrchr` se encuentra en la biblioteca estándar de C `string.h`.

<br>

### [ft_strncmp](./functions/ft_strncmp.c)

Prototipo `int	ft_strncmp(const char *str1, const char *str2, size_t n);`

|                   Descripción                    |                                                     Valor retornado                                                      |
| :----------------------------------------------: | :----------------------------------------------------------------------------------------------------------------------: |
| Compara los primeros n caracteres de dos cadenas | Devuelve un número negativo, cero o positivo, dependiendo de si la primera cadena es menor, igual o mayor que la segunda |

> La función `strncmp` se encuentra en la biblioteca estándar de C `string.h`.

<br>

### [ft_memchr](./functions/ft_memchr.c)

Prototipo `void *memchr(const void *ptr, int value, size_t num);`

|                            Descripción                             |                                               Valor retornado                                               |
| :----------------------------------------------------------------: | :---------------------------------------------------------------------------------------------------------: |
| Busca la primera aparición de un carácter en una cadena de memoria | Un puntero a la posición de la memoria en la que se encuentra el valor buscado, o `NULL` si no lo encuentra |

> La función original, `memchr`, se encuentra en la biblioteca estándar de C `string.h`.

<br>

### [ft_memcmp](./functions/ft_memcmp.c)

Prototipo `int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num);`

|                                              Descripción                                              |                                      Valor retornado                                       |
| :---------------------------------------------------------------------------------------------------: | :----------------------------------------------------------------------------------------: |
| Compara los primeros `num` bytes de los bloques de memoria apuntados por dos punteros `ptr1` y `ptr2` | Devuelve un entero que indica la diferencia entre los bloques de memoria, o cero si no hay |

> La función original, `memcmp`, se encuentra en la biblioteca estándar de C `string.h`. <br>
> Cabe destacar que `memcmp` compara los bytes en base a su valor numérico, no su representación como caracteres ASCII.

<br>

### [ft_strnstr](./functions/ft_strnstr.c)

Prototipo `char	*ft_strnstr(const char *haystack, const char *needle, size_t len);`

|                                                           Descripción                                                           |                                                                Valor retornado                                                                |
| :-----------------------------------------------------------------------------------------------------------------------------: | :-------------------------------------------------------------------------------------------------------------------------------------------: |
| Busca la primera aparición de una subcadena _aguja_ dentro de una cadena más grande _pajar_ un número máximo indicado por `len` | Devuelve un puntero al comienzo de la _aguja_ en el _pajar_, o `NULL` si no se encuentra la subcadena dentro de los primeros `len` caracteres |

> La función `strnstr` se encuentra en la biblioteca de cadenas (`string.h`).

<br>

### [ft_atoi](./functions/ft_atoi.c)

Prototipo `int	ft_atoi(const char *str);`

|                                                                           Descripción                                                                            |                                  Valor retornado                                  |
| :--------------------------------------------------------------------------------------------------------------------------------------------------------------: | :-------------------------------------------------------------------------------: |
| Analiza los caracteres de una cadena hasta que encuentre el primer carácter no numérico o el final de la misma, y luego devuelve el valor entero correspondiente | Si tiene éxito, devuelve el valor convertido a `int` con el signo correspondiente |

> La función original `atoi` se encuentra en la biblioteca estándar de C `stdlib.h`.

<br>

### [ft_calloc](./functions/ft_calloc.c)

Prototipo `void	*ft_calloc(size_t num, size_t size);`

|                                              Descripción                                              |                                                Valor retornado                                                 |
| :---------------------------------------------------------------------------------------------------: | :------------------------------------------------------------------------------------------------------------: |
| Asigna memoria dinámicamente y reserva un bloque de memoria contigua, y luego lo inicializa con ceros | Un puntero al bloque de memoria asignado si tiene éxito, o `NULL` si no se puede asignar la memoria solicitada |

> La función `calloc` también pertenece a la biblioteca estándar de C `stdlib.h`.

<br>

### [ft_strdup](./functions/ft_strdup.c)

Prototipo `char *ft_strdup(const char *str);`

|                                       Descripción                                       |                 Valor retornado                 |
| :-------------------------------------------------------------------------------------: | :---------------------------------------------: |
| Crea una copia de una cadena de caracteres dada y devuelve un puntero a la nueva cadena | Devuelve un puntero a la cadena recién asignada |

> La función `strdup` también pertenece a la biblioteca `stdlib.h`.

<hr>
<br>

### [ft_substr](./functions/ft_substr.c)

Prototipo `char *ft_substr(char const *s, unsigned int start, size_t len);`

|                                                                         Descripción                                                                         |                                                                            Valor retornado                                                                             |
| :---------------------------------------------------------------------------------------------------------------------------------------------------------: | :--------------------------------------------------------------------------------------------------------------------------------------------------------------------: |
| Recibe una cadena, un índice y una longitud y su objetivo es devolver una subcadena de la original que empieza en su mismo índice y tiene la misma longitud | Si el índice está fuera de los límites de la cadena original, se devuelve otra vacía. Si no se puede asignar memoria para la nueva cadena, se devuelve un puntero nulo |

> La función `substr` no es una función estándar de C ni pertenece a ninguna biblioteca específica.

<br>

### [ft_strjoin](./functions/ft_strjoin.c)

Prototipo `char *ft_strjoin(char const *s1, char const *s2);`

|                                 Descripción                                 |              Valor retornado               |
| :-------------------------------------------------------------------------: | :----------------------------------------: |
| Concatena dos cadenas de caracteres para crear una nueva que contiene ambas | Devuelve un puntero a la cadena resultante |

<br>

### [ft_strtrim](./functions/ft_strtrim.c)

Prototipo `char *ft_strtrim(char const *s1, char const *set);`

|                                                                                 Descripción                                                                                  |                                        Valor retornado                                         |
| :--------------------------------------------------------------------------------------------------------------------------------------------------------------------------: | :--------------------------------------------------------------------------------------------: |
| Elimina todos los caracteres que se encuentran al principio y al final de la cadena `s1` que coinciden con cualquiera de los caracteres que se encuentran en la cadena `set` | Devuelve una subcadena de `s1` que comienza en el índice `i` y tiene una longitud de `len - i` |

<br>

### [ft_split](./functions/ft_split.c)

Prototipo `char **ft_split(char const *s, char c);`

|                              Descripción                               |                           Valor retornado                            |
| :--------------------------------------------------------------------: | :------------------------------------------------------------------: |
| Divide una cadena en subcadenas más pequeñas utilizando un delimitador | Devuelve un array (matriz) de cadenas con las subcadenas resultantes |

<br>

### [ft_itoa](./functions/ft_itoa.c)

Prototipo `char *ft_itoa(int n);`

|                                                   Descripción                                                   |                              Valor retornado                               |
| :-------------------------------------------------------------------------------------------------------------: | :------------------------------------------------------------------------: |
| Convierte un número entero en una cadena de caracteres (utilizando `malloc` para asignar memoria dinámicamente) | Devuelve la string que representa ese valor entero recibido como argumento |

<br>

### [ft_strmapi](./functions/ft_strmapi.c)

Prototipo `char *ft_strmapi(char const *s, char (*f)(unsigned int, char));`

|                                                         Descripción                                                         |                                                           Valor retornado                                                           |
| :-------------------------------------------------------------------------------------------------------------------------: | :---------------------------------------------------------------------------------------------------------------------------------: |
| Aplica la función `f` a cada carácter de la cadena `s`, pasando el índice correspondiente de cada carácter a la función `f` | Crea una nueva cadena de caracteres que contiene los resultados de aplicar la función `f` a cada carácter de la cadena original `s` |

<br>

### [ft_striteri](./functions/ft_striteri.c)

Prototipo `void ft_striteri(char *s, void (*f)(unsigned int, char*));`

|                                                               Descripción                                                               |                       Valor retornado                       |
| :-------------------------------------------------------------------------------------------------------------------------------------: | :---------------------------------------------------------: |
| Aplica una función `f` a cada carácter de una cadena `s` en función de su índice, o sea que los cambios se realizan directamente en `s` | No devuelve ningún valor, ya que su tipo de retorno es void |

> La diferencia principal con la función `ft_strmapi` es que `ft_striteri` no devuelve una nueva cadena de caracteres. En su lugar, aplica la función `f` a cada carácter de la cadena `s`, pasando el índice correspondiente y un puntero al carácter. La función `f` puede realizar cualquier operación o modificación sobre el carácter en su lugar.

<br>

### [ft_putchar_fd](./functions/ft_putchar_fd.c)

Prototipo `void ft_putchar_fd(char c, int fd);`

|                       Descripción                       |                       Valor retornado                       |
| :-----------------------------------------------------: | :---------------------------------------------------------: |
| Envía el carácter `c` al _file descriptor_ especificado | No devuelve ningún valor, ya que su tipo de retorno es void |

<br>

### [ft_putstr_fd](./functions/ft_putstr_fd.c)

Prototipo `void ft_putstr_fd(char *s, int fd);`

|                      Descripción                      |                       Valor retornado                       |
| :---------------------------------------------------: | :---------------------------------------------------------: |
| Envía la string `s` al _file descriptor_ especificado | No devuelve ningún valor, ya que su tipo de retorno es void |

<br>

### [ft_putendl_fd](./functions/ft_putendl_fd.c)

Prototipo `void ft_putendl_fd(char *s, int fd);`

|                                      Descripción                                      |                       Valor retornado                       |
| :-----------------------------------------------------------------------------------: | :---------------------------------------------------------: |
| Envía la string `s` al _file descriptor_ especificado... seguido de un salto de línea | No devuelve ningún valor, ya que su tipo de retorno es void |

<br>

### [ft_putnbr_fd](./functions/ft_putnbr_fd.c)

Prototipo `void ft_putnbr_fd(int n, int fd);`

|                      Descripción                      |                       Valor retornado                       |
| :---------------------------------------------------: | :---------------------------------------------------------: |
| Envía el número `n` al _file descriptor_ especificado | No devuelve ningún valor, ya que su tipo de retorno es void |

<hr>

<br>

<p align=center><sub>¡Gracias por tomarte el tiempo de consultar este repositorio! Si tienes alguna crítica constructiva, ¡por favor, escríbeme! Me encantará recibir sugerencias para mejorarlo y quizá ayudar a recién incorporados estudiantes de 42. Si a ti también te ha ayudado, me hará mucha ilusión que me mandes un saludo o le pongas una ★ al repo 💜</sub></p>
