#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char nome[60];
    char menorNome[60];
    bool primeiroNome = true;


    while(true) {
        cout << "Digite um nome ou aperte enter para finalizar: " << endl;
        cin.getline(nome, 60);

        if (strlen(nome) == 0) {
            break;
        }

        if (primeiroNome || strcmp(nome, menorNome) < 0) {
            strcpy(menorNome, nome);
            primeiroNome = false;
        }

    }

    if (!primeiroNome) {
        cout << "O nome lexicograficamente menor: " << menorNome << endl;

    }else {
        cout << "Nenhum nome inserido" << endl;
    }

    return 0;
}
