#include<iostream>
#include<Windows.h>

int main(){

    // Configura o terminal do Windows para aceitar acentuação corretamente (UTF-8)
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    // ESTRUTURA DA PILHA:
    // Criamos um vetor (array) fixo com capacidade para guardar até 5 números inteiros.
    int pilha[5];
    
    // O 'topo' indica a posição do último elemento inserido. 
    // Começa em -1 porque a pilha está totalmente vazia (o primeiro índice do vetor seria 0).
    int topo = -1;
    int tamanho = 5; // Limite máximo de elementos que a pilha suporta

    std::cout<<"==== PILHA ===="<<std::endl;
    std::cout<<std::endl;

    // OPERAÇÃO DE EMPILHAR (PUSH):
    // Aqui os elementos estão sendo colocados manualmente na pilha.
    pilha[0] = 10; // Primeiro elemento (base da pilha)
    pilha[1] = 20; // Segundo elemento
    pilha[2] = 30; // Terceiro elemento (atual topo da pilha)
    
    // Atualizamos o índice do topo para 2, que é onde está o número 30.
    topo = 2;

    std::cout<<"Elementos empilhados: 10, 20, 30"<<std::endl;
    std::cout<<std::endl;

    std::cout<<"Desempilhando..."<<std::endl;
    
    // OPERAÇÃO DE DESEMPILHAR (POP):
    // O loop vai continuar rodando enquanto existirem elementos na pilha (topo maior ou igual a 0).
    // Como a pilha é LIFO, começamos removendo pelo 'topo' (o número 30, que foi o último a entrar).
    while(topo >= 0){
        // Mostra o elemento que está no topo atual
        std::cout<<"Removido: "<<pilha[topo]<<std::endl;
        
        // Decrementa o topo (subtrai 1). O topo passa a apontar para o elemento de baixo.
        topo--;
    }
    

    return 0;
}