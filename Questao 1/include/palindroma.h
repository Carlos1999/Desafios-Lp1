#ifndef PALINDROMA_H
#define PALINDROMA_H
#include <string>

using namespace std;
class Palindroma {
private:
public:
	Palindroma ();
	~Palindroma ();
	
	bool verificarFrase(string frase_);
	string transformaMaiusculo(string letra_);
};

#endif