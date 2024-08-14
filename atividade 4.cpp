#include <iostream>

using namespace std;

int main()
{
    int vetor[10];
    int posicao;

    int maior = 0;
    int segundoMaior = 0;
    int soma = 0, somaPares = 0;



    cout << "Digite a quantidade de posicoes desejadas para o vetor (Limite 10): " << endl;
    cin >> posicao;

    if (posicao > 10) {
        cout << "Erro, limite atingido!" << endl;
        return 1;
    }

    if (posicao < 0) {
        cout << "Erro, somente valores positivos ate 10" << endl;
        return 1;
    }

    for (int i = 0 ; i < posicao ; i++) {
        cout << "Insira um valor: " << endl;
        cin >> vetor[i];

        if (vetor[i] > maior) {
            segundoMaior = maior;
            maior = vetor[i];
        }

        else if (vetor[i] != maior && segundoMaior < vetor[i]) {
            segundoMaior = vetor[i];
        }

        if (vetor[i] % 2 == 0 && i % 2 == 1) {
            somaPares =+ vetor[i];
        }

        soma = maior + segundoMaior;

    }

    cout << "Soma dos dois maiores valores: " << soma << endl;
    cout << "Soma dos valores pares em posicoes impares: " << somaPares << endl;






    return 0;
}
