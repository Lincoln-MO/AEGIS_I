// Nome: Lincoln Martins de Oliveira		Mat:2021008452

#include<iostream>
#include<math.h>

using namespace std;

//Programa que le um conjunto de dados contendo o número de matrícula, as três notas de cada aluno nas provas e a sua respectiva frequência para uma turma de 10 alunos no total.

float media(float a, float b, float c){						/*Função para calcular a media de 3 valores. */
	float m = 0;
	m = (a + b + c)/3;
	return m;
}

float media_de_notas_da_turma(float n){		/*Função para calcular a média da nota da turma. */
	float nota_media_t = 0;
	nota_media_t = n/10;
	return nota_media_t;
}

float percent_reprov(int r){
	float percentual_de_reprovados = 0;
	percentual_de_reprovados = 10*(r);
	return percentual_de_reprovados;
}

int main(){
	float matricula = 0, nota_p1 = 0, nota_p2 = 0, nota_p3 = 0, frequencia = 0, nota_final = 0, maior_n = 0, menor_n = 100, nota_f_total = 0;
	int cont_aprovados = 0, cont_reprovados = 0, cont_reprovados_pre = 0, alunos = 0;
	do{
		cout << "----------------------------------------------------------------------" << endl;
		do{
			cout << "Informe a matricula do aluno: ";
			cin >> matricula;								/*Le a matricula do aluno */
		}while(matricula < 0);
		do{
			cout << "Informe a nota da P1: ";				
			cin >> nota_p1;									/*Le a nota da P1 do aluno */
		}while(nota_p1 < 0 || nota_p1 > 100);			
		do{
			cout << "Informe a nota da P2: ";				
			cin >> nota_p2;									/*Le a nota da P2 do aluno*/
		}while(nota_p2 < 0 || nota_p2 > 100);
		do{
			cout << "Informe a nota da P3: ";				
			cin >> nota_p3;									/*Le a nota da P3 do aluno*/			
		}while( nota_p3 < 0 || nota_p3 > 100);
		cout << "" << endl;
		do{
			cout << "Informe a frequencia do aluno: ";
			cin >> frequencia;
		}while( frequencia < 0);
		nota_final = media(nota_p1, nota_p2, nota_p3);		/*Calcula a nota media final de cada aluno */
		if(nota_final >= 60){								/*Verifica a aprovação ou reporvação por nota.*/
			if(frequencia >= 20){							/*Verifica a aprovação ou reporvação por frequência.*/
				cont_aprovados = cont_aprovados + 1;
			}else{
				cont_reprovados = cont_reprovados + 1;
				cont_reprovados_pre = cont_reprovados_pre + 1; /*conta as reporvações por infrequência.*/
			}
		}else{
			cont_reprovados = cont_reprovados + 1;
			if(frequencia < 20){
				cont_reprovados_pre = cont_reprovados_pre + 1; /*conta as reporvações por infrequência.*/
			}
		}

		if(nota_final > maior_n){							/*Verifica qual é a maior nota da turma. */
			maior_n = nota_final;
		}
		if(nota_final < menor_n){							/*Verifica qual é a menor nota da turma. */
			menor_n = nota_final;
		}
		nota_f_total = nota_f_total + nota_final;			/*soma todas as notas da turma.*/
		cout << "" << endl;
		cout << "A nota final do aluno cuja matricula e " << matricula << " equivale a: " << nota_final << endl;  /*Mostra a nota final de cada aluno.*/
		cout << "" << endl;
		alunos = alunos + 1;							
	}while(alunos != 10);
	cout << "" << endl;
	cout << "---------------------------------------------------------------------------------------------------------------" << endl;
	cout << "" << endl;
	cout << "A maior nota da turma e: " << maior_n << endl;
	cout << "" << endl;
	cout << "A menor nota da turma e: " << menor_n << endl;
	cout << "" << endl;
	cout << "A nota media da turma e: " << media_de_notas_da_turma(nota_f_total) << endl;
	cout << "" << endl;
	cout << "O total de alunos aprovados e: " << cont_aprovados << endl;
	cout << "" << endl;
	cout << "O total de alunos reprovados e: " << cont_reprovados << endl;
	cout << "" << endl;
	cout << "A porcentagem de alunos reprovados por infrequencia e de: " << percent_reprov(cont_reprovados_pre) << "%" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "---------------------------------------------------------------------------------------------------------------" << endl;
	return 0;
}