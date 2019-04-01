#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
char* nombre[];
float precioTotal, precioTemporal;
int totalDeProductos = 0;
int sigueIngresando = 1;

float faltante;
float subtotal;
float importeAPagar;
float cambio;
int deseaContinuar = 0;

int iniciarCuenta();

int main(int argc, char *argv[]){
    
    iniciarCuenta();
 return 0;
}

int iniciarCuenta(){

    precioTotal = 0;
    precioTemporal = 0;
    totalDeProductos = 0;
    subtotal = 0;
    importeAPagar = 0;
    cambio = 0;

    printf("Ingrese su nombre porfavor:\n");

    scanf("%s", &nombre);
    printf("Nombre: %s", nombre);
    
    while(sigueIngresando){
        printf("\n\nPorfavor ingrese el precio:\n");
        scanf("%f", &precioTemporal);
        if(precioTemporal < 0){ //Si la cantidad es negativa
            printf("\n\nCuenta Final: %.2f", precioTotal);
            printf("\nTotal de productos: %d", totalDeProductos);
            printf("\nIva: %.2f", subtotal * .16);
            printf("\nSubtotal: %.2f", subtotal);

            printf("\nEscriba el importe a pagar:\n");
            scanf("%f", &importeAPagar);
            cambio = (importeAPagar - precioTotal);
            if ( cambio < 0) {
                printf("Te faltan insertar $ %.2f", cambio*-1);
		    }
		    else {
				printf("\nCambio: %.2f", cambio);
		    }
            printf("\nMuchas gracias por usar nuestros servicios %s,\n\n Desea continuar otra cuenta?\n\n 1 = Si\n 0 = No\n\n", nombre);
            scanf("%d", &deseaContinuar);
            
            if(deseaContinuar == 1){
				system("cls");
                iniciarCuenta();
                deseaContinuar = 0;
            }else{
                sigueIngresando = 0;
            }

        }else{ //Si es positiva
            precioTotal = precioTotal + precioTemporal;
            subtotal = (precioTotal / 1.16);
            totalDeProductos = totalDeProductos + 1;

            printf("\n\nTotal Actual: %.2f", precioTotal);
            printf("\nTotal de productos: %d", totalDeProductos);

        }
    }
}


