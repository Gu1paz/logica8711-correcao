#include<iostream>
#include<string>
#include<Windows.h>

// 1. O Molde do nosso Produto (A etiqueta do preço)
struct Produto {
    int id;
    std::string nome;
    double preco; // Escolhemos double para ter precisão nos centavos!
};

// Criamos uma prateleira que cabe até 100 produtos
Produto estoque[100];
int totalProdutos = 0; // O nosso dedo indicador que conta quantos produtos temos

void adicionar() {
    std::cout << "\n--- Cadastrar Novo Produto ---" << std::endl;

    std::cout << "Digite o ID do produto: ";
    std::cin >> estoque[totalProdutos].id;

    // O limpador de para-brisa para não pular o nome!
    std::cin.ignore(); 

    std::cout << "Digite o nome do produto: ";
    std::getline(std::cin, estoque[totalProdutos].nome);

    std::cout << "Digite o preço: R$ ";
    std::cin >> estoque[totalProdutos].preco;

    // Avisamos que a vaga foi preenchida e andamos com o dedo indicador
    totalProdutos++;
    std::cout << "¡Produto cadastrado com sucesso!" << std::endl;
}

void exibir() {
    // Se o dedo indicador estiver no zero, a loja está vazia!
    if (totalProdutos == 0) {
        std::cout << "\nO estoque está completamente vazio!" << std::endl;
        return;
    }

    std::cout << "\n=== PRODUTOS NO ESTOQUE ===" << std::endl;
    // O fiscal do loop passa olhando prateleira por prateleira
    for (int i = 0; i < totalProdutos; i++) {
        std::cout << "ID: " << estoque[i].id 
                  << " | Produto: " << estoque[i].nome 
                  << " | Preço: R$ " << estoque[i].preco << std::endl;
    }
}

void menu() {
    std::cout << "\n=== SISTEMA DE MERCADINHO ===" << std::endl;
    std::cout << "1. Adicionar Produto" << std::endl;
    std::cout << "2. Exibir Estoque" << std::endl;
    std::cout << "3. Sair" << std::endl;
    std::cout << "Escolha uma opção: ";
}

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int opcao;

    // Loop infinito para o menu ficar rodando até você mandar sair
    while (true) {
        menu();
        std::cin >> opcao;

        switch (opcao) {
            case 1:
                adicionar();
                break;
            case 2:
                exibir();
                break;
            case 3:
                std::cout << "Fechando o caixa... Até logo!" << std::endl;
                return 0; // Desliga o programa
            default:
                std::cout << "Opção inválida! Tente novamente." << std::endl;
        }
    }

    return 0;
}