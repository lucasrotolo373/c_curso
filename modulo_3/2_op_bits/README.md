# Ejercicio 2 — Operaciones de bits

## Descripción
Manipulación de bits individuales en registros de hardware simulados.
Base fundamental para configurar periféricos en drivers de Linux.

## Operaciones
- OR  (|=)        → prende un bit sin tocar los demás
- AND (&=)        → apaga un bit sin tocar los demás
- XOR (^=)        → invierte un bit
- NOT (~)         → invierte todos los bits
- Shift izq (<<)  → posiciona una máscara en el bit deseado
- Shift der (>>)  → mueve un bit a la posición 0 para leerlo

## Conceptos clave
- Siempre usar 1 << posicion para crear una máscara
- Para leer un bit: (registro >> pos) & 1
- Para apagar un bit: &= ~(1 << pos)
- uint8_t de <stdint.h> garantiza exactamente 8 bits en cualquier arquitectura
- En embedded nunca usar int a secas para registros — el tamaño varía por arquitectura
