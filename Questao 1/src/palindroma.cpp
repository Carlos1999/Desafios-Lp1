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
		return false;
	}

	for (int i = 0; i <tamanhoFraseFinal; i++){
		letra_frase= frase_auxiliar[i];

			cout<<"Letra frase = "<<letra_frase <<"|"<<"TOP = "<<  p->top()<<"|"<<endl;
		if(letra_frase != p->top()){
			return false;
		}
		p->pop();
	}
	return true;

}

string Palindroma::transformaMaiusculo(string letra_){
	string menusculas = "abcdefghijklmnopqrstuvxwyz";
	string maiusculas = "ABCDEFGHIJKLMNOPQRSTUVXWYZ";
	string numeros = "0123456789";

	string auxiliarMenuscula;
	string auxiliarMaiuscula;
	string auxiliarNumero;
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

	for (int i = 0; i < 10; i++){
		auxiliarNumero = numeros[i];
		if (letra_ == auxiliarNumero){
			return auxiliarNumero;
		}
	}


	return "";

}