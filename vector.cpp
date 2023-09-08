#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<int> numeros;
    string entrada;

    do {
        int numero;
        cout << "Digite um inteiro: ";
        cin >> numero;
        numeros.push_back(numero);

        cout << "Deseja inserir mais um número? (sim/nao): ";
        cin >> entrada;
    } while (entrada == "sim");

    if (numeros.empty()) {
        cout << "Nenhum número foi inserido." << endl;
        return 0;
    }

    int soma = 0;
    for (int numero : numeros) {
        soma += numero;
    }

    double media = static_cast<double>(soma) / numeros.size();

    cout << "A soma dos inteiros é: " << soma << endl;
    cout << "A média dos inteiros é: " << media << endl;

    return 0;
}
