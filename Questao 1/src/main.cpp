#include "pilha.h"
#include "palindroma.h"
#include <iostream>

using namespace std ;

int main (int argc , char const * argv []){

	Palindroma *p = new Palindroma();

	p->verificarFrase("Socorram-me, SUBI NO ÔNIBUS EM MARROCOS");
return 0;
}