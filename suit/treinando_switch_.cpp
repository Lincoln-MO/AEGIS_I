#include <iostrem>
using namespace std;
// primeiro programa
int main(){
	int dia;
	cout << "Dia da semana \n";
	cin >> dia;
	switch(dia){
		case 1:
		cout <<"Domingo \n";
		break;
		case 2:
		cout <<"segunda-feira \n";
		break;
		case 3:
		cout <<"terça-feira \n";
		break;
		case 4:
		cout <<"Quarta-feira\n";
		break;
		case 5:
		cout <<"quinta-feira \n";
		break;
		case 6:
		cout <<"Sexta-feira \n";
		break;
		case 7:
		cout <<"Sabado \n";
		break;
		default:
			cout << "Dia invalido";
		
	}
}


//segundo programa

int main(){
	char oper;
	float n1, n2;
	cout << "ntre com o operador (+,-, *,/)";
	cin >> oper;
	cout << "digite o primeiro numero:" << endl;
	cin >> n1; 
	cout << "digite o segundo numero:" << endl;
	cin >> n2; 
	switch (oper){
		case '+':
			cout << n1 << "+" << n2 << "=" << n1+n2;
			break;
		case '-':
			cout << n1 << "+" << n2 << "=" << n1-n2;
			break;
		case '*':
			cout << n1 << "+" << n2 << "=" << n1*n2;
			break;
		case '/':
			cout << n1 << "+" << n2 << "=" << n1/n2;
			break;
		default:
			cout << 
	}
}