#include<iostream>
#include<math.h>

using namespace std;

void resolveeqdosegundogral(float a, float b, float c){	
			float x1 = 0, x2 = 0;
			x1 = (-b +(sqrt((b*b)-(4*a*c))))/(2*a)
			x2 = (-b -(sqrt((b*b)-(4*a*c))))/(2*a)
}
	
int main (){
	float ca = 0, cb = 0, cc = 0;
	cout << "Digite a:";
	cin >> ca;
	cout << "Digite b:";
	cin >> cb;
	cout << "Digite c:";
	cin >> cc;
	if (((cb*cb)-(4*ca*cc)) < 0){
		cout << " A equação nao possue solucoes reais" << endl;
	} else {
		cout << " As raizes da funcao sao respectivamente: " << resolveeqdosegundogral(ca, cb, cc) << endl;
}		