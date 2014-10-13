#include <stdio.h>      
#include <stdlib.h> 

void rellenarMatriz(int X[][4]){/*ññenar la matriz de cada jugador*/
	srand (time(NULL));
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			X[i][j]=rand() % 50+1;
		}
	}
}
void mostrarMatriz(int X[][4]){/*imprimir*/
	for (int i = 0; i < 4; ++i)
	{
		printf("\n");
		for (int j = 0; j < 4; ++j)
		{
			printf("%d\t",X[i][j] );/*aqui deberá invocar la función "figura"*/
		}
	}
}
/*para poner el nombre de la figura, aunque es mucha talacha hacerlo
char figura(int a){
	char c[20];
	switch(a){
		case 1:
		c = "aguila";
		break;
		case 2:
		c="nopal";/*se deben acompletar los 50 casos de figuritas*/
		/*break;
	}
	return c; 
}*/
int contar(int X[][4], int numBuscar, int con){/*debe pasar por argumento el numero a buscar y el contador*/
	
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			if (X[i][j]==numBuscar)
			{
				con = con+1;
			}
		}
	}
	
}
main()
{
	int A[4][4],B[4][4],C[4][4],num;
	srand (time(NULL));
	if (con==16)/* si el jugador llega a 16 en su contador gana*/
	{
		printf("Ganaste\n");

	}
	do{
		/*Invocar funciones de imprimir para todas las matrices(plantilas de cada jugador) y las funciones de buscar figura 
		solo para las matrices de la "computadora"*/
		num = rand() % 50+1;/*genera numero de carta que se buscara */
		printf("Tienes esa figura?\n");
			scanf("%s",&c);
		/*invocar a las funciones, requiero 3 contadores*/
		if(c=="s" || c=="S"){/* preguntar al usuario si tiene la figura*/
			/*invocar funcion de busqueda de nuemro, solo en caso de que el usaurio se percate de tener la figura*/
		}
	}while(con=!16 && con2=!16 && con3=!16)/*se debe repetir el ciclo hasta que no halla algun contador igual a 16*/
}
