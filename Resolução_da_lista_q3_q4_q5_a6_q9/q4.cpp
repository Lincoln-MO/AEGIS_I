//Nome: Lincoln Martins de Oliveira		Mat: 2021008452

#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include<math.h>

using namespace std;
//Programa que calcula o montante a pagar ao final de uma compra de maçãs.
int main(){
	float mcont = 0, mp1 = 0.30, mp2 = 0.25, total = 0;
	cout << "Informe o número de maçãs compradas:";
	if (mcont < 12) {
		total = mcont*mp1; 
		cout << "O valor final da sua compra é de:" << total << endl;
	} else {
		total = mcont*mp2; 
		cout << "O valor final da sua compra é de:" << total << endl;
	}
	return 0;
		
}