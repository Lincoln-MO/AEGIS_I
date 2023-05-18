// Nome: Lincoln Martins de Oliveira		Mat:2021008452

#include<iostream>
#include<math.h>

using namespace std;



int main(){
	int i = 1000;
	cout << "Os numeros do intervalo 1000 a 1999 que divididos por 11 possuem resto igual a 5 sao: " << endl;
	while(i < 2000){
		if (i%11 == 5){
			cout << i << ",";
		}
		i++;
	}
	cout << endl;
	return 0;
}