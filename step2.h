#include <iostream>
using namespace std;

int longestPalindrome(string transmission){
    int T = transmission.length();
    int End = 1,start = 0;
    int i = 0;
    while (i < T){
        for (int j = i; j < T; j++) {
            int p = 1; //Nuestro flag para el palindromo

            for (int k=0; k < ((j-i+1)/2); k++)
                if (transmission[i + k] != transmission[j-k])
                    p = 0;

            if (p && (j - i + 1) > End) {
                start = i;
                End = j - i + 1;
            }
        }
        i++;
    }
    int posicionInicial =start;
    int posicionFinal =start + End;
    cout << "Palindromo mas largo en transmission: ";

    for (int i = posicionInicial; i <= posicionFinal - 1; ++i){
        cout << transmission[i];
    }

    cout << endl << "Posicion Inicial: " << posicionInicial <<" Posicion Final: " << posicionFinal<< endl;
    return posicionFinal;
}
