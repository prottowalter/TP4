/*Protto, Walter Fabian
  K2051
  08/05/2015*/
/*Informa el promedio de caracteres por linea, la cantidad de lineas y la cantidad de 

caracteres*/
#include <stdio.h>
#include <stdlib.h>

int main (void)
	{
	int c,nc,nl;
	for (nc=nl=0;(c=getchar())!=EOF;)
	 if (c=='\n')
	 	++nl; else
	 			++nc;
	
	if (ferror(stdin))
		perror("No se pudo seguir leyendo de la entrada debido a un error");
	
	nl==0?printf("No hay lineas"):printf("Longitud promedio: %.1f\n", nc/(float) nl);
	printf("La cantidad de caracteres leidos es:%d\n",nc);
	printf("La cantidad de lineas leidas es:%d",nl);
	
	return EXIT_SUCCESS;
	}
