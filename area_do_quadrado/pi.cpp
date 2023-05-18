#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<iostream>

using namespace std;

double pi ( int n){
	int i;
	double formula;
	for(i=1,formula=1;i<=n;i++)   /*  define formula igual a 1*/
		{
		formula += 4 * pow(-1,i) / (2*i+1); /*tem q colocar o + antes do igual para somar ao valor antigo a nova parcela*/
		}
	printf ("Valor aproximado de pi=%0.2f\n", formula);
	return formula;
	} /*fim da funcao*/