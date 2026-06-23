#include<iostream>
#include<Windows.h>

int main(){

    // Configura o terminal do Windows para aceitar acentuação corretamente (UTF-8)
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    // Criamos uma pilha com capacidade para 10 elementos (índices de 0 a 9)
    int  pilha[10];
    int topo = -1; // -1 significa que a pilha começa totalmente vazia
    int opcao;

    std::cout<<"==== PILHA COM MENU ===="<<std::endl;

    // Loop infinito para manter o menu rodando até que o usuário escolha sair (opção 4)
    while(true){
        std::cout<<std::endl;
        std::cout<<"1. Empilhar (Push)"<<std::endl;
        std::cout<<"2. Desempilhar (Pop)"<<std::endl;
        std::cout<<"3. Exibir pilha"<<std::endl;
        std::cout<<"4. Sair"<<std::endl;
        std::cout<<"Escolha: ";
        std::cin>>opcao;

        // --- OPÇÃO 1: EMPILHAR (PUSH) ---
        if(opcao == 1){
            // Como o vetor vai até o índice 9, só podemos empilhar se o topo for menor que 9.
            // Se o topo for 9, significa que a pilha já está cheia (Stack Overflow).
            if(topo < 9){
                int valor;
                std::cout<<"Digite um valor: ";
                std::cin>>valor;
                
                topo++; // Move o ponteiro do topo para a próxima posição livre
                pilha[topo] = valor; // CORRIGIDO: Agora o valor digitado é realmente salvo na pilha!
                
                std::cout<<"Elemento "<<valor<<" empilhado com sucesso!"<<std::endl;
            }else {
                std::cout<<"Erro: Pilha cheia (Stack Overflow)!"<<std::endl;
            }
        }
        // --- OPÇÃO 2: DESEMPILHAR (POP) ---
        else if(opcao == 2){
            // Só podemos desempilhar se houver algum elemento (topo maior ou igual a 0).
            // Se o topo for -1, a pilha está vazia (Stack Underflow).
            if(topo >= 0){
                std::cout<<"Removido: "<<pilha[topo]<<std::endl;
                topo--; // Reduz o topo, "esquecendo" o elemento que estava lá
            }else{
                std::cout<<"Erro: Pilha vazia (Stack Underflow)!"<<std::endl;
            }
        }
        // --- OPÇÃO 3: EXIBIR PILHA ---
        else if(opcao == 3){
            // Verifica se há elementos para mostrar
            if(topo >= 0){
                std::cout<<"Pilha atual (da base ao topo): ";
                // Faz um laço do índice 0 até a posição atual do topo
                for(int i = 0; i <= topo; i++){
                    std::cout<<pilha[i]<<" ";
                }
                std::cout<<std::endl;
            }else{
                std::cout<<"Pilha vazia!"<<std::endl;
            }
        }
        // --- OPÇÃO 4: SAIR ---
        else if(opcao == 4){
            std::cout<<"Saindo do programa..."<<std::endl;
            break; // Quebra o loop 'while(true)' e finaliza o programa
        }
        // --- TRATAMENTO PARA OPÇÕES INVÁLIDAS ---
        else {
            std::cout<<"Opção inválida! Tente novamente."<<std::endl;
        }
    }

    return 0;
}