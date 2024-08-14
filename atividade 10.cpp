#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char cargo[50];
    double salario, salarioNovo, aumento;

    cout << "Digite o salário do funcionário: R$: " << endl;
    cin >> salario;

    cout << "Digite o cargo do funcionário: ";
    cin.getline(cargo, 50);

    if (strcmp(cargo, "Gerente" ) == 0) {
        aumento = 0.10;
    }else if (strcmp(cargo, "Engenheiro") == 0) {
        aumento = 0.20;
    }else if (strcmp(cargo, "Tecnico") == 0) {
        aumento = 0.30;
    } else {
        aumento = 0.05;
    }

    salarioNovo = salario + (salario * aumento);
    double diferenca = salarioNovo - salario;

    cout << "Salário antigo: R$ " << salario << endl;
    cout << "Novo salário: R$" << salarioNovo << endl;
    cout << "Diferença: R$" << diferenca << endl;



    return 0;
}
