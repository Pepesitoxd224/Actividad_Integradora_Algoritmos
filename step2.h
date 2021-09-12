#include <iostream>
using namespace std;

bool findLongestPal(string transmission){
    int T = transmission.length();
    int fin = 1,inicio = 0;
    int i = 0;
    while (i < T){
        for (int j = i; j < T; j++) {
            int p = 1;

            for (int k=0; k < ((j-i+1)/2); k++)
                if (transmission[i + k] != transmission[j-k])
                    p = 0;

            if (p && (j - i + 1) > fin) {
                inicio = i;
                fin = j - i + 1;
            }
        }
        i++;
    }
    int posicionInicial =inicio;
    int posicionFinal =inicio + fin;
    cout << "Palindromo mas largo en transmission: ";

    for (int i = posicionInicial; i <= posicionFinal - 1; ++i){
        cout << transmission[i];
    }

    cout << endl << "Posicion Inicial: " << posicionInicial <<" Posicion Final: " << posicionFinal<< endl;
    return true;
}
