/***************************************************************************************
 *            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE                                  *
 * Proposito:                      Deber 1*
 * Autor:                          Ivan Mantilla*
 * Fecha de creacion:              09/11/2024                                          *
 * Fecha de modificacion:          10/11/2024                                          *
 * Materia:                        Estructura de datos                                 *
 * NRC :                           1978                                                *
 **************************************************************************************/


#include <iostream>
#include "Matriz.cpp"
#include "Operaciones.cpp"
int ingresar(const char *);
int ingresar(const char *msj){
	int dim;
	printf("\n%s\n",msj);
	scanf_s("%d",&dim);
	return dim;
}
//void iniciar(int, int);
void iniciar(int  dim){
	int pot;
	int **m3=nullptr;
	int **m1=nullptr;
	int **m2=nullptr;
	int **mr=nullptr;
	Matriz matriz(m1,m2,mr,dim);
	Operaciones operaciones(matriz);
	operaciones.segmentar1();
	operaciones.segmentar2();
	operaciones.segmentarR();
	operaciones.encerar1();
	operaciones.imprimir1();
	operaciones.encerar2();
	operaciones.encerarR();
	operaciones.generar1();
	operaciones.generar2();
	printf("\nMatriz 1\n");
	operaciones.imprimir1();
	printf("\nMatriz 2\n");
	operaciones.imprimir2();
	pot=ingresar("Ingrese la potencia de la matriz");
	operaciones.procesarPot(pot);
	printf("\nMatriz R\n");
	operaciones.imprimirR();
	printf("\nMatriz Multiplicacion\n");
	operaciones.procesarMulti();
	operaciones.imprimirR();
	printf("\nMatriz Parametrizada\n");
	m3=operaciones.generarMatriz();
	operaciones.imprimirEscalar(m3);

}
int main(int argc, char** argv) {
	int dim;
	dim=ingresar("Ingrese la dimension de la matriz");
	iniciar(dim);
	system("pause");
	return 0;
}
