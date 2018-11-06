#include "pilha.h"
#include "palindroma.h"
#include <iostream>

using namespace std ;

int main (int argc , char const * argv []){

	Palindroma *p = new Palindroma();

	cout<<p->verificarFrase("Amo Oma. Se Roma me tem amores, amo Oma!")<<endl;
return 0;
}