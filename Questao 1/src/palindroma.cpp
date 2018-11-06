#include "palindroma.h"
#include "pilha.h"
#include <string>
#include <iostream>
using namespace std;
Palindroma::Palindroma (){
}

Palindroma::~Palindroma (){
}

bool Palindroma::verificarFrase(string frase_){
	Pilha<string> *p = new Pilha<string>(frase_.length());

	int tamanhoFrase = frase_.length();
	int tamanhoFraseFinal = tamanhoFrase;
	string letra_frase;
	string frase_auxiliar;

	for (int i = 0; i < tamanhoFrase; i++){
		letra_frase= frase_[i];
		letra_frase = transformaMaiusculo(letra_frase);
		if(letra_frase!=""){
			frase_auxiliar += letra_frase[0];
			p->push(letra_frase);
		}else{
			tamanhoFraseFinal--;
		}
	}

	if(p->empty()){
		cout<<"Frase fazia"<<endl;
		return false;
	}
	cout<<"comparando: Letra da frase / Letra da pilha"<<endl;
	for (int i = 0; i <tamanhoFraseFinal; i++){
		letra_frase= frase_auxiliar[i];

			cout<<"Letra frase = "<<letra_frase <<"|"<<"TOP = "<<  p->top()<<"|"<<endl;
		
		if(letra_frase != p->top()){
		cout<<"Não um palíndromo"<<endl;
			return false;
		}
		p->pop();
	}
	cout<<"É um palíndromo"<<endl;
	return true;

}

string Palindroma::transformaMaiusculo(string letra_){
	string menusculas = "abcdefghijklmnopqrstuvxwyz";
	string maiusculas = "ABCDEFGHIJKLMNOPQRSTUVXWYZ";
  	string numeros = "0123456789";
	
	string auxiliarMenuscula;
	string auxiliarMaiuscula;
	string auxiliarNumero;

	//Tratando letras
	for (int i = 0; i < 26; i++){
		auxiliarMenuscula = menusculas[i];		
		auxiliarMaiuscula = maiusculas[i];

		if(letra_ == auxiliarMenuscula){
			return auxiliarMaiuscula;
		}
		if(letra_ == auxiliarMaiuscula){
			return auxiliarMaiuscula;
		}
	}	

	//Tratando acentos
	/*
	if(letra_ =="Á" || letra_ =="À" || letra_ =="Ã"|| letra_ =="Â" 
		|| letra_ =="á"|| letra_ =="à"|| letra_ =="ã"|| letra_ =="â"){
		return "A";
	}
	if(letra_ =="É" || letra_ =="È" ||letra_ == "Ê"|| letra_ =="é"|| letra_ =="è"|| letra_ == "ê"){
		return "E";
	}
	if(letra_ =="Í" || letra_ =="Ì" || letra_ =="í"|| letra_ =="ì"){
		return "I";
	}
	if(letra_ =="Ó" || letra_ =="Ò" || letra_ =="Õ"|| letra_ =="Ô" 
		|| letra_ =="ó"|| letra_ =="ò"|| letra_ =="õ"|| letra_ =="ô"){
		return "O";
	}
	if(letra_ =="Ú" || letra_ =="Ù" || letra_ =="ú"|| letra_ =="ù"){
		return "U";
	}
	*/
	//Tratando números
	for (int i = 0; i < 10; i++){
		auxiliarNumero = numeros[i];
		if (letra_ == auxiliarNumero){
			return auxiliarNumero;
		}
	}


	return "";

}