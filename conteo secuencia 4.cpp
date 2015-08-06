/* conteo digitos de una secuencia

*/


#include  <iostream>
#include <math.h>

using namespace std;

int main () {
	
	int x, cant;
	
	cout<< "inserte un numero" << endl;
	cin>> x;
	cant=log10(x)+1;
	
	cout<< " el numero tiene: "<< cant << " "<< "digitos"; 
	
	
	
}
