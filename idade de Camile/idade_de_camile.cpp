//Nome: Lincoln Martins de Oliveira	Mat: 2021008452
//solução da questão da olimpiada de informatica

#include<iostream>
#include<math.h>
using namespace std;
//função compara
void compara(int i1, int i2, int i3){
	if(i1 < 5 or i1 > 100 || i2 < 5 or i2 > 100 || i3 < 5 or i3 > 100){
	cout << "Insira uma idade valida" << endl;
	}else if ((i1 > i2 && i1 < i3) || (i1 > i3 && i1 < i2)){
		cout << "A idade de Camile e: " <<  i1 << endl;
	}else if ((i2 > i1 && i2 < i3) || (i2 > i3 && i2 < i1)){
		cout << "A idade de Camile e: " <<  i2 << endl;
	}else {
		cout << "A idade de Camile e: " <<  i3 << endl;
	}
}


int main (){
	float a = 0, b = 0, c = 0;
	cout << "Informe a idade das tres irmans" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	compara(a, b, c);
	return 0;
}