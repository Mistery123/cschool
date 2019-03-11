#include <stdio.h>
#include <stdlib.h>
int contador, limiteinferior, limitesuperior;
float y, b, m;
char repetir;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	do{
	    system("cls");
	    printf("Vamos a calcular los puntos de una recta\n");
	    printf("Ingresa el limite inferior del eje x: ");
	    scanf("%d", &limiteinferior);
	    
	    printf("Ingresa el limite superior del eje x: ");
	    scanf("%d", &limitesuperior);
	    printf("Ingresa el desplazamiento en el eje y: ");
	    scanf("%f", &b);
	    printf("Ingresa la pendiente: ");
	    scanf("%f", &m);
	    
	    if(limiteinferior<= limitesuperior){
	    printf("Pares de coordenadas X - Y \n");
	    for(contador=limiteinferior; contador<limitesuperior; contador = contador+1) {
		y = m*contador + b;
		printf("X = %d , Y = %f \n", contador, y);
		
	    }
	}else {
		printf("El limite inferior no es menor al limite superior \n");
	}
	    printf("\n Presiona s si deseas calcular otra tabla de conversion");
	    repetir = getch();
    }while(repetir == 's' || repetir == 'S');
	return 0;
}
