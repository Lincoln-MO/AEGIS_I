//Nome: Lincoln Martins de Oliveira		Mat: 2021008452

#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include<math.h>

using namespace std;
// Programa que recebe três valores inteiros e os ordena em ordem crescente.
int main(){
	int a = 0, b = 0, c = 0, coringa = 0;
	cout << "Informe o primeiro valor inteiro:";
	cin >> a;
	cout << "Informe o segundo valor inteiro:";
	cin >> b;
	cout << "Informe o terceiro valor inteiro:";
	cin >> c;
	if (a < b < c || a < c < b ){
		a = a; 
	}
	if (b < a < c || b < c < a ) {
		coringa = a;
		a = b;	
		b = coringa;
	}
	if (c < a < b || c < b < a ) {
		coringa = a;
		a = c;
		c = coringa;
	}
	if (b < c) {
		b = b;
	}
	if (c < b){
		coringa = b;
		b = c;
		c = coringa;
	}
	cout << "Os numeros em ordem crescente sao:" << a "," b "," c << endl;
	return 0;
}