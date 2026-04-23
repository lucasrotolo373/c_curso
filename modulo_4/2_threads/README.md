# Ejercicio 2 — Threads con pthreads

## Descripción
Creación de threads concurrentes con pthreads y sincronización con mutex.
Base para manejar tareas paralelas en Linux embebido.

## Conceptos clave
- pthread_create crea un thread — no devuelve el id, lo escribe en el primer argumento
- La función del thread debe tener firma void *func(void *arg)
- pthread_join es el punto donde los threads se unen al flujo principal — como un río que se divide y vuelve a unirse
- Sin pthread_join el main puede terminar antes que los threads y matarlos
- El argumento se pasa como void * y se castea adentro del thread
- Mutex protege secciones críticas — solo un thread a la vez puede ejecutarlas
- Con mutex los threads pierden paralelismo pero ganan consistencia
- Sin mutex el output se intercala — con mutex un thread retiene el lock hasta hacer unlock
- Compilar con -lpthread obligatorio
