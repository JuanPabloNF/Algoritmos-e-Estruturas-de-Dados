#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str[40];
    int contador = 0 ;

    cout << "Digite uma string (Limite - > 40 caracteres): " << endl;
    cin.getline(str, 40);

    for (int i = 0 ; i < strlen(str) ; i++) {
        if (str[i] == 'a');
            str[i] = 'b';
        contador++;
    }

    cout << "Número de caracteres modificados: " << contador << endl;
    cout << "String modificada: " << str << endl;

    return 0;
}
