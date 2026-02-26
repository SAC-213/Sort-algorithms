#include <stdio.h>
#include <stdlib.h>
#include "TADArbolBin.h"

int main(int argc, char *argv[])
{
	arbolBinario arbol;
	Inicializar(&arbol);
	int a[10] = {89, 60, 5, 19, 69, 31, 0, -5, 201, 42};
	int i = 0;

	for (int j = 0; j < 10; j++)
	{
		Insert(&arbol, a[j]);
	}

	InOrden(&arbol, Raiz(&arbol), a, &i);

	Destruir(&arbol);

	for (int j = 0; j < 10; j++)
	{
		printf("[%d]",a[j]);
	}
}
