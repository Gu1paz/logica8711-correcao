#include<iostream>
#include<Windows.h>

int main(){

    // Configura o terminal do Windows para aceitar acentuação corretamente (UTF-8)
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    // Criamos uma fila estática com capacidade para 10 elementos
    int fila[10];
    
    // Controle da fila:
    // 'inicio' acompanha quem é o próximo a ser removido.
    // 'fim' acompanha onde o próximo elemento deve ser inserido.
    int inicio = 0;
    int fim = 0;
    int opcao;

    std::cout<<"==== FILA COM MENU ===="<<std::endl;

    // Loop infinito para manter o menu ativo até o usuário escolher a opção 4
    while(true){
        std::cout<<std::endl;
        std::cout<<"1. Enfileirar (Enqueue)"<<std::endl;
        std::cout<<"2. Desenfileirar (Dequeue)"<<std::endl;
        std::cout<<"3. Exibir"<<std::endl;
        std::cout<<"4. Sair"<<std::endl;
        std::cout<<"Escolha: ";
        std::cin>>opcao;

        // --- OPÇÃO 1: ENFILEIRAR ---
        if(opcao == 1){
            // Verifica se o 'fim' ainda não atingiu o limite máximo do vetor (10)
            if(fim < 10){
                int valor;
                std::cout<<"Digite o valor: ";
                std::cin>>valor;
                
                fila[fim] = valor; // Insere o novo elemento sempre no final da fila
                fim++; // Move o ponteiro do fim para a próxima posição livre
                
                std::cout<<"Elemento "<<valor<<" enfileirado!"<<std::endl;
            }else{
                // Se 'fim' for 10, o vetor acabou
                std::cout<<"Erro: Fila cheia!"<<std::endl;
            }
        }
        // --- OPÇÃO 2: DESENFILEIRAR ---
        else if(opcao == 2){
            // A fila só tem elementos se o 'inicio' for menor que o 'fim'
            // Se 'inicio == fim', significa que todos que entraram já saíram
            if(inicio < fim){
                // Remove (atende) sempre quem está no 'inicio' da fila (FIFO)
                std::cout<<"Removido: "<<fila[inicio]<<std::endl;
                inicio++; // O próximo da fila passa a ser o novo início
            }else{
                std::cout<<"Erro: Fila vazia!"<<std::endl;
            }
        }
        // --- OPÇÃO 3: EXIBIR FILA ---
        else if(opcao == 3){
            // Verifica se existem elementos ativos para exibir
            if(inicio < fim){
                std::cout<<"Fila atual: ";
                // O laço começa a partir do 'inicio' atual (quem já saiu é ignorado)
                // e vai até o elemento imediatamente anterior ao 'fim'
                for(int i = inicio; i < fim; i++){
                    std::cout<<fila[i]<<" ";
                }
                std::cout<<std::endl;
            }else{
                std::cout<<"Fila vazia!"<<std::endl;
            }
        }
        // --- OPÇÃO 4: SAIR ---
        else if(opcao == 4){
            std::cout<<"Saindo..."<<std::endl;
            break; // Encerra o loop e finaliza o programa
        }
        // --- TRATAMENTO DE OPÇÃO INVÁLIDA ---
        else {
            std::cout<<"Opção inválida! Tente novamente."<<std::endl;
        }
    }

    return 0;
}