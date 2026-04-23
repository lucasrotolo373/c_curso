# Ejercicio 3 — Señales del sistema

## Descripción
Manejo de señales del sistema operativo con sigaction.
Patrón base para cierre limpio de daemons en Linux embebido.

## Conceptos clave
- Una señal es una notificación asíncrona del kernel — como un golpe en la puerta
- SIGINT es Ctrl+C, SIGTERM es kill, SIGKILL no se puede interceptar
- Un daemon es un proceso que corre en segundo plano indefinidamente
- sigaction es más portable y predecible que signal()
- El handler es la función que se ejecuta cuando llega la señal
- La máscara define qué señales se bloquean mientras corre el handler
- volatile sig_atomic_t garantiza lectura/escritura atómica de la bandera
- El handler solo modifica la bandera — el loop decide cuándo terminar
- Mismo patrón que attachInterrupt() en ESP32 pero a nivel de OS
