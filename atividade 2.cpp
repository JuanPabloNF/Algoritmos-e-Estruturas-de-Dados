#include <iostream>

using namespace std;

int main()
{
    int produtos[5];
    double valor_unit[5] = {10.00, 20.00, 30.00, 40.00, 50.00};
    double total;
    double total_unit;



//Quantidade de produtos comprados
    for (int i = 0 ; i < 5 ; i++) {
        cout  << "Digite a quantidade comprada do produto " << i << ":" << endl;
        cin >> produtos[i];
        total += valor_unit[i] * produtos[i];
        cout << "Total a pagar pelo produto " << i << ":" << endl <<  total << endl;
        total_unit += total;
    }

        cout << "Total a ser pago por todos os produtos: " << endl << total_unit << endl;











    return 0;
}
