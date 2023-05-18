// Nome: Lincoln Martins de Oliveira		Mat:2021008452

#include<iostream>


using namespace std;

void Move_Discos(int n, char origem, char destino, char auxiliar){
	if(n==1){
		cout << "Mover disco " << n << " de " << origem << " para " << destino << endl;
	}else{
		Move_Discos(n-1, origem, destino, auxiliar);
		cout << "Mover disco " << n << " de " << origem << " para " << destino << endl;
		Move_Discos(n-1, auxiliar, destino, origem);
	}
}

int main(){
	int discos = 0;
	cout << "Informe o numero de discos da torre de Hanoi: ";
	cin >> discos;
	Move_Discos(discos, 'A', 'C','B');
	return 0;
}