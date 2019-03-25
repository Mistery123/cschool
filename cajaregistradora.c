#include <stdio.h>
#include <stdlib.h>

char cliente[25], producto[15], repetir;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int contador, precio;
    printf("Bienvenido a este programa, funciona para una caja registradora.\n");
    printf("Para iniciar una cuenta escriba el nombre del cliente y presione enter:\n");
    scanf("%s", cliente);
    printf("Estimado %s por favor agregue el precio de un producto: \n");
    do{
    scanf("%d", &precio );
    contador = 1;
    printf("Lleva %d productos comprados y su total actual es: %d",contador,  precio);
}while(precio => '0');
    
	return 0;
}
