#include <iostream>

using namespace std;

int main()
{
    int linha, coluna;


    cout << "Digite a quantidade de linhas desejadas (Limite -> 20): ";
    cin >> linha;

    if (linha > 20) {
        cout << "Limite de linhas atingido!" << endl;
        return 1;
    }

    if (linha <= 0) {
        cout << "Valor de linhas inválido!" << endl;
        return 1;
    }


    cout << "Digite a quantidade de colunas desejadas (Limite -> 25): ";
    cin >> coluna;

    if (coluna > 25) {
        cout << "Limite de colunas atingido!" << endl;
        return 1;
    }

    if (coluna <= 0) {
        cout << "Valor de colunas inválido!" << endl;
        return 1;
    }


    int matriz[linha][coluna];
    int matrizTransposta[coluna][linha];


    cout << "Digite os valores da matriz:" << endl;
    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            cout << "Valores [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz[i][j];
        }
    }


    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            matrizTransposta[j][i] = matriz[i][j];
        }
    }


    cout << "Matriz Transposta:" << endl;
    for (int i = 0; i < coluna; i++) {
        for (int j = 0; j < linha; j++) {
            cout << matrizTransposta[i][j] << " ";
        }
        cout << endl;
    }




    return 0;
}
