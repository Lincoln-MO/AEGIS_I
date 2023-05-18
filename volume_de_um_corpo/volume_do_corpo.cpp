// Nome: Lincoln Martins de Oliveira 
/* programa para calcular o volume de um corpo, sabendo seu diametro e sua altura.*/
#include<iostream>
#include<math.h>
using namespace std;


// função para calcular o volume de um corpo sabendo a altura e o diametro.
float volumedocorpo_sabendo_diametro_altura(float d,float h) {
	float pi = 3.14159265359;
	float raio = d/2;
	float volume_do_corpo = 2*pi*raio*h;
	return volume_do_corpo;
}

int main(){
	float diametro = 0;
	cout << " Informe o valor do diametro do corpo em cm:";
	cin >> diametro;
	float altura = 0; 
	cout << " Informe o valor da altura do corpo em cm:";
	cin >> altura;
	cout << " O volume do corpo e:" << volumedocorpo_sabendo_diametro_altura(diametro,altura) << "cm3" << endl;
	return 0;
}