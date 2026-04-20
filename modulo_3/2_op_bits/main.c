#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

/*
| OR — para prender un bit sin tocar los demás
& AND — para apagar un bit sin tocar los demás
^ XOR — para invertir un bit
~ NOT — para invertir todos los bits
<< shift izquierda — para posicionar una máscara
>> shift derecha — para leer un bit específico
*/

int main(){
	uint8_t gpio_config = 0b00000000;
// bit 7: habilitado (1) / deshabilitado (0)
// bit 6: dirección — output (1) / input (0)
// bit 5: pull-up activado
// bit 4: pull-down activado
// bit 3-0: velocidad (0-15)
	gpio_config |= 1 << 7;
	gpio_config |= 1 << 6;
	gpio_config |= 1 << 5;
	gpio_config |= 1 << 2;
	gpio_config |= 1 << 0;
}

