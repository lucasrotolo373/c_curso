#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
/*
strlen(s) — longitud del string sin contar el \0
strcpy(dst, src) — copia src en dst
strcat(dst, src) — concatena src al final de dst
strcmp(s1, s2) — compara dos strings, devuelve 0 si son iguales
strstr(s, sub) — busca un substring, devuelve puntero al inicio o NULL
strtok(s, delim) — divide un string por un delimitador
*/

int main(){
	char comando[] = "ON:13,2,7;";
	char *token = strtok(comando, ":,;");
	while (token != NULL){
		if (!strcmp(token, "ON") || !strcmp(token, "OFF")){
			printf("Operacion: %s\n", token);
		} else {
			printf("Pin: %s\n", token);
		}
		token = strtok(NULL, ":,;");
	}
	return 0;
}