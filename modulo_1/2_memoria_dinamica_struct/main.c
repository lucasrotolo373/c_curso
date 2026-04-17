#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nombre[20];
    int edad;
} Persona;

int main() {
    int cant = 0;
    printf("Ingrese cantidad de personas: ");
    scanf("%d", &cant);
    getchar();
    Persona *lista = malloc(cant * sizeof(Persona));
    for (int i = 0; i < cant; i++){
        printf("Ingrese nombre de persona: ");
        printf("%d\n", i);
        fgets(lista[i].nombre, sizeof(lista[i].nombre), stdin);
        printf("Ingrese edad de persona: ");
        printf("%d\n", i);
        scanf("%d", &lista[i].edad);
        getchar();
    }
    for (int i = 0; i < cant; i++){
        printf("%s", lista[i].nombre);
        printf("%d\n", lista[i].edad);
    }
    free(lista);
    return 0;
}