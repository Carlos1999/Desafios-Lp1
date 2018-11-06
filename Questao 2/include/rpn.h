#ifndef RPN_H
#define RPN_H
#include <string>
using namespace std;
class Rpn{
private:

public:
	Rpn();
	~Rpn();	
	string executar(string notacao_);
	string ehNumero(string caractere_);

};
#endif