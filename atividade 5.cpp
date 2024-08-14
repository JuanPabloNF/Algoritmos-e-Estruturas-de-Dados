#include <iostream>

using namespace std;

int main()
{
    int v1 [10];
    int v2 [10];
    int resultadoPar, resultadoImpar;

    for (int i = 0 ; i < 10 ; i++) {
        cout << "Vetor 1: " << endl;
        cin >> v1[i];
    }

    for (int i = 0 ; i < 10 ; i++) {
        cout << "Vetor 2: " << endl;
        cin >> v2[i];

        if (v2[i] % 2 == 0) {
           resultadoPar = v2[i] * 5;
            cout << "Par multiplicado por cinco: " << resultadoPar << endl << endl;
        }

        else if (v2[i] % 2 == 1) {
            resultadoImpar = v2[i] + 5;
            cout << "Impar somado com cinco: " << resultadoImpar << endl << endl;
        }

    }

    for (int i = 0 ; i < 10 ; i++) {
        cout << "Resultado vetor 1: " << v1[i] << endl << endl;
    }


    for (int i = 0 ; i < 10 ; i++) {
        cout << "Resultado vetor 2: " << v2[i] << endl << endl;
    }




    return 0;
}
