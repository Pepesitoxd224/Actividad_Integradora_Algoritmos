#include <iostream>
using namespace std;

void findMalicious(string transmission, string mcode){
    
    int T = transmission.length();
    int M = mcode.length();

    for (int i = 0; i < T; i++){
        if (transmission[i] == mcode[0]){
            if (transmission.substr(i , M) == mcode){
                cout << "True El codigo maliciose se encuentra en la posicion " << i << " y termina en la posicion " << i + M << endl; 
                return;
            }
        }
    }

    cout << "False No se encontro este codigo malicioso" << endl; 
}