# Ejercicio 1 — Punteros a funciones

## Descripción
Implementación de punteros a funciones en C puro, simulando el patrón file_operations de drivers Linux.
Dos dispositivos distintos comparten la misma interfaz (struct) con implementaciones diferentes.

## Conceptos clave
- Un puntero a función guarda la dirección de una función, no su resultado
- La sintaxis int (*operacion)(int, int) declara un puntero a función
- Una struct puede contener punteros a funciones para agrupar comportamientos
- El caller no sabe qué función se ejecuta — solo llama al puntero
- Es el mismo concepto que polimorfismo en C++, pero a mano
- Base del patrón file_operations en drivers de Linux
