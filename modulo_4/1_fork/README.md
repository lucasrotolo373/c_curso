# Ejercicio 1 — Procesos con fork

## Descripción
Creación de procesos hijo con fork() y sincronización con wait().

## Conceptos clave
- fork() es la única función en C que retorna dos veces — una en el padre y una en el hijo
- En el padre fork() devuelve el PID real del hijo
- En el hijo fork() devuelve 0 — convención, no el PID real
- getpid() devuelve el PID real del proceso actual
- wait(NULL) bloquea el padre hasta que el hijo termine
- Sin wait() el orden de ejecución es impredecible
- Cada proceso tiene su propia copia de memoria — pid tiene distinto valor en padre e hijo
