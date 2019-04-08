#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
char nombre[15];
float preciototal, preciotemporal;
int totaldeproductos = 0;
int sigueingresando = 1;

float faltante, subtotal, importeapagar, cambio;



int main(int argc, char *argv[]){

     printf("Ingrese su nombre porfavor:\n");
     scanf("%s", &nombre);
     printf("Nombre: %s", nombre);

    do{
        
        printf("\n\nPorfavor ingrese el precio:\n");
        scanf("%f", &preciotemporal);
        if(preciotemporal < 0){ //Si la cantidad es negativa

            printf("\n\nCuenta Final: %.2f", preciototal);
            printf("\nTotal de productos: %d", totaldeproductos);
            printf("\nIva: %.2f", subtotal * .16);
            printf("\nSubtotal: %.2f", subtotal);

            printf("\nEscriba el importe a pagar:\n");
            scanf("%f", &importeapagar);
            cambio = (importeapagar - preciototal);
            if ( cambio < 0) {
                printf("Te faltan insertar $ %.2f", cambio*-1);
		    }
		    else {
				printf("\nCambio: %.2f", cambio);
		    }
            printf("\nMuchas gracias por usar nuestros servicios %s,\n\n Desea continuar otra cuenta?\n\n 1 = Si\n 0 = No\n\n", nombre);
            scanf("%d", &sigueingresando);

            if(sigueingresando == 0){
                break;
            }
            
            system("cls");


            //Resetea todo para que vuelva a iniciar 
                preciototal = 0;
                preciotemporal = 0;
                totaldeproductos = 0;
                subtotal = 0;
                importeapagar = 0;
                cambio = 0;

                printf("Ingrese su nombre porfavor:\n");
                scanf("%s", &nombre);
                printf("Nombre: %s", nombre);
    

      
        }else{ //Si es positiva
            preciototal = preciototal + preciotemporal;
            subtotal = (preciototal / 1.16);
            totaldeproductos = totaldeproductos + 1;

            printf("\n\nTotal Actual: %.2f", preciototal);
            printf("\nTotal de productos: %d", totaldeproductos);

        }


    }while(sigueingresando);

 return 0;
}



