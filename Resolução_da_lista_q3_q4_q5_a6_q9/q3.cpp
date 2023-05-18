//Nome: Lincoln Martins de Oliveira		Mat: 2021008452

#include<iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
//programa que pede uma senha e informa se o acesso foi permitido ou negado
int main(){
	int senha = 0;
	cout << "Informe a senha:";
	cin >> senha;
	if (senha > 1234 || senha < 1234){
		cout << "Acesso negado" << endl;
	} else {
		cout << "Acesso permitido" << endl;
	}
	return 0;
}