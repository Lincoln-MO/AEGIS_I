// Nome: Lincoln Martins de Oliveira		Mat:2021008452

#include<iostream>
#include<math.h>
//#include <locale.h>  /*permite uso de caracteres especiais*/
//#include <stdio.h>
//#include <stdlib.h>

using namespace std;

// função que retorna a soma de dois números reais passados como parâmetro.

float somadedoisnumeros(float a, float b){
	float soma = 0;
	soma = a + b; 
	return soma;
}


int main(){
	//setlocale(LC_ALL, "Portuguese");
	float x = 0, y = 0;
	cout << "Informe o primeiro parâmetro:";
	cin >> x;
	cout << "Informe o primeiro parâmetro:";
	cin >> y;
	cout << "A soma de " << x << " e " << y << " é: " << somadedoisnumeros(x,y) << endl;
}