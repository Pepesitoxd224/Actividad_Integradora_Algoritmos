#include <iostream>
#include <fstream>
#include <string>

#include "step1.h"
#include "step2.h"

using namespace std;

int main() {
    string line, transmission1, transmission2, mcode1, mcode2, mcode3;

    ifstream maliciousCode1("mcode1.txt");
    getline(maliciousCode1, mcode1);
    maliciousCode1.close();

    ifstream maliciousCode2("mcode2.txt");
    getline(maliciousCode2, mcode2);
    maliciousCode2.close();

    ifstream maliciousCode3("mcode3.txt");
    getline(maliciousCode3, mcode3);
    maliciousCode3.close();

    ifstream transmissionCode1("transmission1.txt");
    while (getline(transmissionCode1, line)) {
        transmission1 += line;
    };
    transmissionCode1.close();

    ifstream transmissionCode2("transmission2.txt");
    while (getline(transmissionCode2, line)) {
        transmission2 += line;
    };
    transmissionCode2.close();

    cout << endl << "Parte 1" << endl;
    findMalicious(transmission1, mcode1);
    findMalicious(transmission1, mcode2);
    findMalicious(transmission1, mcode3);
    findMalicious(transmission2, mcode1);
    findMalicious(transmission2, mcode2);
    findMalicious(transmission2, mcode3);
    cout << endl << endl << "Parte 2" << endl;

    findLongestPal(transmission1);
    findLongestPal(transmission2);

    cout << endl << endl << "Parte 3" << endl;

    int P1 = PalMoreLenght(transmission1);
    int P2 = PalMoreLenght(transmission2);

    if (P1 > P2) {

        cout << "El palindromo mas largo esta en el archivo -transmission1- " << endl;
        findLongestPal(transmission1);
    }
    else {

        cout << "El palindromo mas largo esta en el archivo -transmission2- " << endl;
        findLongestPal(transmission2);
    }



    return 0;
}
