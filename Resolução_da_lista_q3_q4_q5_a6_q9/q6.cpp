//Nome: Lincoln Martins de Oliveira		Mat: 2021008452

#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include<math.h>

using namespace std;
//programa	 que calcula e imprime	seu	peso ideal.
int main (){
	float altura = 0, pesoideal = 0;
	char sexo;
	cout << "Qual seu sexo? \n Digite m para Masculino e f para feminino:";
	cin >> sexo;
	cout << "Qual o sua altura?";
	cin >> altura;
	if (sexo == 'm'){
		pesoideal = (72.7*altura)-58;
	}else{
		pesoideal = (62.1*altura)-44.7;
	}
	cout << "O seu peso ideal é:" << pesoideal << endl;
	return 0;
}
