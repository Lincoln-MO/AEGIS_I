/*código para saber qualquer área de um quadrado através de seu lado */

#include<iostream>
#include<math.h>
using namespace std;

//função que calcula a área do quadrado e ou o quadrado de um número
float areadoquadrado(float l){
	float area = l*l;
	return area;
}
	
int main(){ 
  	float lado = 0;
  	cout << "informe o valor do lado do quadrado:";   
  	cin >> lado;
  	cout << "A area do quadrado é : " << areadoquadrado(lado) << endl;
	return 0;
}

