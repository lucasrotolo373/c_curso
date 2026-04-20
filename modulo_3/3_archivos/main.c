#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
/*
Las funciones principales:

fopen() — abre un archivo, devuelve un puntero FILE *
fclose() — cierra el archivo, libera recursos
fread() / fwrite() — lectura y escritura binaria
fprintf() / fscanf() — lectura y escritura con formato (como printf pero a un archivo)
fgets() — lee una línea completa

Modos de apertura:

"r" — solo lectura
"w" — escritura, crea el archivo o lo sobreescribe
"a" — append, agrega al final sin borrar
"rb" / "wb" — lectura/escritura binaria
*/
int main(){
	FILE *f = fopen("/Users/lucasrotolo/Desktop/log.txt", "w");
	char linea[50];
	if (f == NULL) {
        printf("Error al abrir el archivo.\n");
        return 1;
    }
	for(int i = 1; i < 6; i++){
		int valor = random()%100;
		fprintf(f, "Entrada %d: %d\n", i, valor);
	}
	fclose(f);

	f = fopen("/Users/lucasrotolo/Desktop/log.txt", "r");
	if (f == NULL) {
        printf("Error al abrir el archivo.\n");
        return 1;
    }
    while (fgets(linea, sizeof(linea), f) != NULL){
    	printf("%s", linea);
    }
    fclose(f);
    return 0;
}