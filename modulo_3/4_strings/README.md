# Ejercicio 4 — Strings en C

## Descripción
Parser de comandos seriales usando manipulación de strings en C puro.
Base para parsear protocolos de comunicación en embedded.

## Conceptos clave
- Un string en C es un array de char terminado en \0
- char cmd[] copia el string al stack (modificable)
- char *cmd apunta a un literal de solo lectura — no modificable
- strtok divide un string reemplazando delimitadores por \0
- strtok devuelve NULL cuando no hay más tokens
- Primera llamada: strtok(string, delimitadores)
- Llamadas siguientes: strtok(NULL, delimitadores) — continúa desde donde quedó
- strcmp devuelve 0 si los strings son iguales
- token es un puntero al interior del string original, no una copia
