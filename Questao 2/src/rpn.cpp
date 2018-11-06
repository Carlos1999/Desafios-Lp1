#include "pilha.h"
#include "rpn.h"
#include <string>
using namespace std;
Rpn::Rpn(){	
}
Rpn::~Rpn(){	
}	

string Rpn::executar(string notacao_){
	string notacao_separada[quantidadeEspacos(notacao_)+1];
	string caractere_;	
	int contador=0;
	
	for (int i = 0; i < notacao_.length(); i++){	
	caractere = notacao_[i];
		
	while(caractere_!=" "){
		notacao_separada[contador] +=caractere_;	
	}		
	contador++;
	}

	for (int i = 0; i < quantidadeEspacos(notacao_)+1; ++i){
		if(notacao_separada[i]!="+"&&notacao_separada[i]!="-" && notacao_separada[i]!="*" && notacao_separada[i]!="/"){
			
		}
	}
	
}

string Rpn::ehNumero(string caractere_){
	string numeros = "0123456789";
	string num_aux;
	for (int i = 0; i < 10; ++i){
		num_aux = numeros[i];
		if(caractere_==num_aux){
			return caractere_;
		}
	}

	return "";
}

int Rpn::quantidadeEspacos(string notacao_){
	int tamanho = notacao.length();
	int espacos=0;
	for (int i = 0; i < tamanho; i++){
		if(notacao_[i]==" "){
			espacos++;
		}
	}
	return espacos;
}