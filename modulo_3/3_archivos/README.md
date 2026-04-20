# Ejercicio 3 — Manejo de archivos en C

## Descripción
Escritura y lectura de un archivo de texto usando la API estándar de C.
Base para interactuar con el sistema de archivos de Linux, incluyendo dispositivos en /sys y /dev.

## Conceptos clave
- fopen() devuelve un FILE * — abstracción de alto nivel sobre un file descriptor
- Modos: "w" escribe/sobreescribe, "r" lee, "a" agrega al final
- fprintf() escribe con formato igual que printf pero a un archivo
- fgets() lee una línea completa, devuelve NULL al llegar al final del archivo
- Siempre verificar que fopen no devuelva NULL antes de operar
- Siempre cerrar el archivo con fclose() — en embedded el kernel puede no aplicar cambios si no cerrás
- En Linux todo es un archivo — el mismo mecanismo sirve para GPIOs en /sys/class/gpio
