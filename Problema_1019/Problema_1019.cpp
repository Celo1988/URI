#include <iostream>
#include<cmath>
 #include <iomanip>
 
using namespace std;
 
int main() {
 	
 	int tempo;
 	cin >> tempo;
 	
 	int hora = tempo/3600;
 	tempo = tempo%3600;
 	
	int minuto = tempo/60;
 	tempo = tempo %60;
 
    return 0;
}
