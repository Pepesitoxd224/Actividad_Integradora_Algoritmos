#include <iostream>
#include <fstream>
using namespace std;

int main(){
    string line, transmission1, transmission2,mcode1, mcode2, mcode3;

    ifstream maliciousCode1("mcode1.txt");
    getline (maliciousCode1, mcode1);
    maliciousCode1.close();

    ifstream maliciousCode2("mcode2.txt");
    getline (maliciousCode2, mcode2);
    maliciousCode2.close();

    ifstream maliciousCode3("mcode3.txt");
    getline (maliciousCode3, mcode3);
    maliciousCode3.close();

    ifstream transmissionCode1("transmission1.txt");
    while(getline (transmissionCode1, line)){
        transmission1 += line;
    };
    transmissionCode1.close();

    ifstream transmissionCode2("transmission2.txt");
    while(getline (transmissionCode2, line)){
        transmission2 += line;
    };
    transmissionCode2.close();

    return 0;
}