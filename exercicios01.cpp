#include <iostream>

int main() {

    // Declara um vetor de inteiros com capacidade para armazenar 5 números
    int numeros[5];

    // Laço para solicitar ao usuário que digite os 5 números
    for (int i = 0; i < 5; i++) {
        std::cout << "Digite o número: ";
        std::cin >> numeros[i]; // Armazena o número na posição i do vetor
    }

    // Exibe uma mensagem antes de mostrar os números armazenados
    std::cout << "Exibir números: ";

    // Laço para percorrer o vetor e exibir cada número digitado
    for (int i = 0; i < 5; i++) {
        std::cout << numeros[i] << " "; // Exibe o valor da posição i seguido de um espaço
    }

    return 0; // Indica que o programa foi executado com sucesso
}