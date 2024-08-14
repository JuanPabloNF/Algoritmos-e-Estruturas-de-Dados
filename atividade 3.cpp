#include <iostream>
#include <cmath>  // Para usar a função sqrt

using namespace std;

int main() {
    double notas[5];
    double desvios[5];
    double desviosQuadrados[5];
    double soma = 0.0, media = 0.0, variancia = 0.0, desvioPadrao = 0.0;

    // Entrada das notas dos alunos
    for (int i = 0; i < 5; i++) {
        cout << "Digite a nota do aluno " << i + 1 << ": ";
        cin >> notas[i];
        soma += notas[i];
    }


    media = soma / 5;


    for (int i = 0; i < 5; i++) {
        desvios[i] = notas[i] - media;
        desviosQuadrados[i] = desvios[i] * desvios[i];
        variancia += desviosQuadrados[i];
    }

    variancia = variancia / 5;
    desvioPadrao = sqrt(variancia);


    cout << "Média das notas: " << media << endl;
    cout << "Desvios em relação à média: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Aluno " << i + 1 << ": " << desvios[i] << endl;
    }

    cout << "Desvios ao quadrado: ";
    for (int i = 0; i < 5; i++) {
        cout << "Aluno " << i + 1 << ": " << desviosQuadrados[i] << endl;
    }

    cout << "Variância: " << variancia << endl;
    cout << "Desvio padrão: " << desvioPadrao << endl;

    return 0;
}
