//Nome: Lincoln Martins de Oliveira		Mat: 2021008452

#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include<math.h>

using namespace std;
//Programa que le 3 valores inteiros e escreve o maior deles na tela, considerando que o usuario não informará valores iguais.
int main(){
	int a = 0, b = 0, c = 0;
	cout << "Informe o primeiro valor inteiro:";
	cin >> a;
	cout << "Informe o segundo valor inteiro:";
	cin >> b;
	cout << "Informe o terceiro valor inteiro:";
	cin >> c;
	if (a > b && a > c){
		cout << "O maior valor informado é:" << a << endl;
	}else if(b > a && b > c){
		cout << "O maior valor informado é:" << b << endl;
	}else{
		cout << "O maior valor informado é:" << c << endl;
	}
	return 0;
}