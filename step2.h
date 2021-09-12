#include <iostream>
using namespace std;

void imprimirPalindromo(string transmission, int inicio, int fin){
  for (int i = inicio; i <= fin; ++i)
      cout << transmission[i];
}

int longestPalindrome(string transmission){
    int T = transmission.length();
    int End = 1,start = 0;
    for (int i = 0; i < T; i++) {
        for (int j = i; j < T; j++) {
            int flag = 1;

            for (int k = 0; k < (j - i + 1) / 2; k++)
                if (transmission[i + k] != transmission[j - k])
                    flag = 0;

            if (flag && (j - i + 1) > End) {
                start = i;
                End = j - i + 1;
            }
        }
    }
    int posicionInicial =start;
    int posicionFinal =start + End;
    cout << "Palindromo mas largo en transmission: ";
    imprimirPalindromo(transmission, posicionInicial, posicionFinal - 1);
    cout << endl << "Posicion Inicial: " << posicionInicial <<" Posicion Final: " << posicionFinal<< endl;
    return posicionFinal;
}
