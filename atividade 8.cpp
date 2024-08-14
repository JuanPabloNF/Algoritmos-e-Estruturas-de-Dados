#include <iostream>
#include <string.h>
using namespace std;

int main()
{
  char primeiraString [50];
  char segundaString [50];

    cout << "Digite a primeira string: " << endl;
    cin.getline(primeiraString, 50);

    cout << "Digite a segunda string: " << endl;
    cin.getline(segundaString, 50);

    cout << "Primeira String: " << primeiraString << endl;
    cout << "Segunda String: " << segundaString << endl;

    if (strlen(primeiraString) >= 2) {
        cout << "A segunda letra da minha string: " << primeiraString[1] << endl;

    }else {
        cout << "A primeira string tem menos de duas letras." << endl;

    }

    if (strlen(segundaString) >= 2) {
        cout << "Penultima letra da segunda string: " << segundaString[strlen(segundaString) - 2] << endl;

    }else {
        cout << "A segunda string tem menos de duas letras" << endl;
    }



    return 0;
}
