/* Geometria Espacial */

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h> //Necessária para usar algumas funções matematicas (arredondamento, potenciação, raiz quadrada, etc).

using namespace std;

//Função principal do programa
int main(){
	
	//Permite usar acentos
	setlocale(LC_ALL, "");
	
	//Definindo variaveis do CUBO
	int Vcubo, arestasCubo; 					//Variaveis usadas no calculo de volume
	int AtCubo; 								//Variaveis usadas no calculo da Area total (usarei tbm as arestas, ja declaradas) 
	
	//Definindo variaveis do PARALELEPIPEDO
	int paraLadoA, paraLadoB, paraLadoC; 		//Variaveis usadas no calculo de volume (lados do paralelepipedo)
	int AtPara;									//Variavel para Area Total do Paralelepipedo
	
	//Definindo variaveis do CONE
	int hCone, rCone;							//Variaveis usadas no calculo da Geratriz do Cone
	int gCone;									//Variavel para a geratriz do cone
	float AtCone;								//Variavel para a Area Total do Cone
	
	//Definindo variaveis do CILINDRO
	int hCilindro, rCilindro;					//Variaveis usadas no calculo do Volume e da Area Total do Cilindro
	int vCilindro, AtCilindro;					//Variaveis para resultados do Volume e Area Total
	
	//Definindo variaveis da ESFERA
	int rEsfera;								//Variavel do raio da esfera
	int AtEsfera;								//Variavel para mostrar o resultado da Area Total da esfera
	
	//Definindo variaveis auxiliares
	int opcao; 									//Para o switch case
    float pi = 3.14; 							//Para informar o Pi
	
	
	//Lista de opções
	cout << "----------LISTA DE OPÇÕES----------";
	cout << "\n1 - Volume e Área total do CUBO";
	cout << "\n2 - Volume e Área total do PARALELEPÍPEDO";
	cout << "\n3 - Área total do CONE";
	cout << "\n4 - Volume e Área total do CILINDRO";
	cout << "\n5 - Área total da ESFERA";
	cout << "\n0 - SAIR do Programa";
	cout << "\n------------------------------";
	
	//Usuário escolhe uma opção
	cout << "\nESCOLHA UMA DAS OPÇÕES: ";
	cin >> opcao;
	
	//Limpa a tela após a escolha
	system("CLS");
	
	//Menu para escolha
	switch(opcao){
		case 0:
			return 0;
		
		case 1:
			//mostra a opção escolhida
			cout << "\nOpção 1 escolhida!\n";
			cout << "\n----------CÁLCULOS----------\n";
			cout << "\nCálculo do Volume de um Cubo\n";
			
			//Coleta o valor de uma das arestas
			cout << "\nDigite o valor de uma de suas arestas: ";
			cin >> arestasCubo;
			
			//PARTE DO CÁLCULO DO VOLUME DO CUBO
			//Apresenta a formula ao usuario
			cout << "\nFÓRMULA: V = a³";
			
			//Mostra a formula com os valores ja preenchidos
			cout << "\nV = " << arestasCubo << "³";
			
			//Mostra a formula ja sem o numero elevado
			cout << "\nV = " << arestasCubo << " * " << arestasCubo << " * " << arestasCubo;
			
			//Apresenta o resultado do calculo
			cout << "\nV = " << arestasCubo * arestasCubo * arestasCubo << "cm³\n";
			
			//PARTE DO CÁLCULO DE AREA TOTAL DO CUBO
			
			//Mostra que essa parte é a do calculo da AT do Cubo
			cout << "\nCálculo da Área total de um Cubo\n";
			
			//Apresenta a formula ao usuario
			cout << "\nFÓRMULA: At = 6 * a²";
			
			//Mostra a formula com os valores ja preenchidos
			cout << "\nAt = 6 * " << arestasCubo << "²";
			
			//Mostra a formula ja sem o numero elevado
			cout << "\nAt = 6 * " << arestasCubo * arestasCubo;
			
			//Faz o calculo da AT do Cubo
			AtCubo = 6 * (arestasCubo * arestasCubo);
			
			//Apresenta o resultado do cálculo
			cout << "\nAt = " << AtCubo;
			
			//faz a quebra do switch
			break;
		
		case 2:
			//mostra a opção escolhida
			cout << "\nOpção 2 escolhida!\n";
			cout << "\n----------CÁLCULOS----------\n";
			cout << "\nCálculo do Volume de um Paralelepípedo\n";
			
			//Coleta o valor de cada lado do Paralelepipedo
			cout << "\nDigite o valor do lado A: ";
			cin >> paraLadoA;
			cout << "Digite o valor do lado B: ";
			cin >> paraLadoB;
			cout << "Digite o valor do lado C: ";
			cin >> paraLadoC;
			
			//PARTE DO CÁLCULO DO VOLUME DO PARALELEPIPEDO
			//Apresenta a formula ao usuario
			cout << "\nFÓRMULA: V = a * b * c";
			
			//Mostra a formula com os valores ja preenchidos
			cout << "\nV = " << paraLadoA << " * " << paraLadoB << " * " << paraLadoC;
			
			//Apresenta o resultado do volume do paralelepipedo
			cout << "\nV = " << paraLadoA * paraLadoB * paraLadoC;
			
			//Pula uma linha para separar tudo
			cout << "\n";
			
			//PARTE DO CÁLCULO DA AREA TOTAL DO PARALELEPIPEDO
			cout << "\nCálculo da Área Total de um Paralelepípedo\n";
			
			//Apresenta a formula ao usuario
			cout << "\nFÓRMULA: At = 2Ab + 2Ac + 2Bc";
			
			//Mostra a formula com os valores ja preenchidos
			//cout << "\nAt = 2 * (" << paraLadoA << "*" << paraLadoB ") + 2 * (" << paraLadoA << "*" << paraLadoC << ") + 2 * (" << paraLadoB << "*" << paraLadoC;
			
			//Faz o calculo da AT do Paralelepipedo
			AtPara = 2 * (paraLadoA * paraLadoB) + 2 * (paraLadoA * paraLadoC) + 2 * (paraLadoB * paraLadoC);
			
			//Apresenta o resultado da area total do paralelepipedo
			cout << "\nAt = " << AtPara;
			
			//faz a quebra do switch
			break;
		
		case 3: 
			//Mostra a opção escolhida
			cout << "\nOpção 3 escolhida!\n";
			cout << "\n----------CÁLCULOS AUXILIARES----------\n";
			cout << "\nCálculo da geratriz\n";
			
			//Coletando os dados
			cout << "\nDigite a altura do cone: ";
			cin >> hCone;
			cout << "\nDigite o raio do cone: ";
			cin >> rCone;
			
			//PARTE DO CÁLCULO DA GERATRIZ
			//Apresenta a formula ao usuario
			cout << "\nFÓRMULA: g² = h² + r²";
			cout << "\nFÓRMULA ALTERNATIVA: g² = (h * h) + (r * r)\n";
			
			//Mostra a formula com os valores ja preenchidos
			cout << "\nG² = " << hCone << "² +  " << rCone << "²";
			
			//Mostra o calculo ja sem a potenciação
			cout << "\nG² = " << pow(hCone, 2) << " + " << pow(rCone, 2);
			
			//Fazendo o calculo
			gCone = pow(hCone, 2) + pow(rCone, 2);
			
			//Apresenta o resultado (Com o G ainda em forma de potencia)
			cout << "\nG² = " << gCone;
			
			//Apresenta o resultado ja sem a potencia
			cout << "\nG = " << sqrt(gCone);
			cout.precision(3);
			
			//Pula linha
			cout << "\n";
			
			//Faz a separação das partes
			cout << "\n----------------------------------------\n";
			
			//PARTE DO CÁLCULO DA AT DO CONE
			cout << "\n----------CÁLCULOS----------\n";
			cout << "\nCálculo da Área Total do Cone\n";
			
			//Apresenta a formula ao usuario
			cout << "\nFÓRMULA: At = pi * r * (g + r)";
			
			//Mostra a fórmula com os valores ja preenchidos
			cout << "\nAt = " << pi << " * " << rCone << " * (" << sqrt(gCone) << " + " << rCone << ")";
			
			//Fazendo o cálculo
			AtCone = pi * rCone * (sqrt(gCone) + rCone);
			
			//Apresenta o resultado do cálculo
			cout << "\nAt = " << AtCone;
			
			//faz a quebra do switch
			break;
		
		case 4:
			//Mostra a opção escolhida
			cout << "\nOpção 4 escolhida!\n";
			cout << "\n----------CÁLCULOS----------\n";
			cout << "\nCálculo do Volume do Cilindro\n";
			
			//Coletando os dados do usuario
			cout << "\nDigite a altura do cilindro: ";
			cin >> hCilindro;
			cout << "\nDigite o raio do cilindro: ";
			cin >> rCilindro;
			
			//PARTE DO CÁLCULO DO VOLUME
			//Apresenta a formula ao usuário
			cout << "\nFÓRMULA: V = pi * r² * h";
			
			//Mostra a formula com os valores ja preenchidos
			cout << "\nV = " << pi << " * " << pow(rCilindro, 2) << " * " << hCilindro;
			
			//Fazendo o calculo
			vCilindro = pi * pow(rCilindro, 2) * hCilindro;
			
			//Apresenta o resultado do cálculo
			cout << "\nV = " << vCilindro;
			
			//Pula linha
			cout << "\n";
			
			//PARTE DO CÁLCULO DA ÁREA TOTAL
			cout << "\nCálculo da Área Total do Cilindro\n";
			
			//apresenta a formula ao usuario
			cout << "\nFÓRMULA: At = 2 * pi * r * (r + h)";
			
			//Mostra a formula com os valores ja preenchidos
			cout << "\nAt = 2 * " << pi << " * " << rCilindro << " * (" << rCilindro << " + " << hCilindro << ")";
			
			//Fazendo os calculos
			AtCilindro = 2 * pi * rCilindro * (rCilindro + hCilindro);
			
			//Apresenta o resultado do cálculo
			cout << "\nAt = " << AtCilindro;
			
			//faz a quebra do switch
			break;
		
		case 5:
			//Mostra a opção escolhida
			cout << "\nOpção 5 escolhida!\n";
			cout << "\n----------CÁLCULOS----------\n";
			cout << "\nCálculo da Área Total de uma Esfera\n";	
			
			//Coletando os dados do usuário
			cout << "\nDigite o raio da esfera: ";
			cin >> rEsfera;
			
			//Apresenta a fórmula ao usuário
			cout << "\nFÓRMULA: At = 4 * pi * r²";
			
			//Mostra a formula com os valores ja preenchidos
			cout << "\nAt = 4 * " << pi << " * " << pow(rEsfera, 2);
			
			//Fazendo os calculos
			AtEsfera = 4 * pi * pow(rEsfera, 2);
			
			//Apresenta o resultado do cálculo
			cout << "\nAt = " << AtEsfera;
			
			//Faz a quebra do switch
			break;
		
		default:
			//Mostra um aviso ao usuario
			cout << "Opção Inválida! Tente novamente";
			cout << "\nDica: Escolha uma das 5 opções.";
	}
	
	//Créditos ao criador :p
	cout << "\n\nDesenvolvido por: Pedro Dantas";
	
	return 0;
}
