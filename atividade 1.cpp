#include <iostream>
using namespace std;

int main() {

    int array[5], i = 0, somatorio = 0;

    for (i = 0 ; i < 5 ; i++){
        cout << "Digite um valor:" << endl;
        cin >> array[i];
    }

    for (i = 0 ; i < 5 ; i++)
        if (array[i] % 2 == 1)
            somatorio += array[i];

    cout << "Somatorio valores impares:" << somatorio << endl;



    return 0;
}