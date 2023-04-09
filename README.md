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

|      Funciones de libc      | Funciones adicionales | Parte bonus |
| :-------------------------: | :-------------------: | :---------: |
| De la librería `<ctype.h>`  |                       |             |
| [`ft_isalpha`](#ft_isalpha) |                       |             |
| [`ft_isdigit`](#ft_isdigit) |                       |             |
|                             |                       |             |
|                             |                       |             |
|                             |                       |             |
|                             |                       |             |
|                             |                       |             |
|                             |                       |             |
|                             |                       |             |
|                             |                       |             |
|                             |                       |             |

<br>

## [ft_isalpha](./functions/ft_isalpha.c)

|                 Descripción                 |                            Valor retornado                             |
| :-----------------------------------------: | :--------------------------------------------------------------------: |
| Comprueba si un carácter es alfabético o no | Devuelve 1 si es `true` (alfabético) o 0 si es `false` (no alfabético) |

## [ft_isdigit](./functions/ft_isdigit.c)

|              Descripción              |                   Valor retornado                    |
| :-----------------------------------: | :--------------------------------------------------: |
| Comprueba si un carácter es un dígito | Devuelve 1 si es `true` (numérico) o 0 si es `false` |
