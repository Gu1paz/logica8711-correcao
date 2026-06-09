#include<iostream>
#include<string>
#include<Windows.h>

struct Tarefa{
    int id;
    std::string descricao;
    bool concluida;
};

Tarefa tarefas[50];
    int totalTarefas = 0;

    void adicionar(){
        std::cout<<"\n --- Adicionar tarefas ---"<<std::endl;

        std::cout<<"ID: ";
        std::cin>>tarefas[totalTarefas].id;

        std::cin.ignore();
        std::cout<<"Descrição: ";
        std::getline(std::cin, tarefas[totalTarefas].descricao);

        tarefas[totalTarefas].concluida = false;

        totalTarefas++;
        std::cout<<"Tarefa adicionada!"<<std::endl;
    }

    void listar(){
        if(totalTarefas == 0){
            std::cout<<"\nNenhuma tarefa!"<<std::endl;
            return;
        }
        std::cout<<"\n--- Tarefas ---"<<std::endl;
        for(int i = 0; i < totalTarefas; i++){
            std::string status = tarefas[i].concluida ? "S" : "N";
            std::cout<<"["<<status<<"]"<<tarefas[i].id<<" - "<<tarefas[i].descricao<<std::endl;
        }
    }
    void marcarConcluida(){
        int idBuscado;
        std::cout<<"\nID da tarefa: ";
        std::cin>>idBuscado;

        for(int i = 0; i <totalTarefas; i++){
            if(tarefas[i].id == idBuscado){
                tarefas[i].concluida = true;
                std::cout<<"Marcado como concluído!"<<std::endl;
                return;
            }
        }
        std::cout<<"Tarefa não encontrada!"<<std::endl;
    }

    void menu(){
        std::cout<<"\n === TODO LIST ==="<<std::endl;
        std::cout<<"1. Adicionar"<<std::endl;
        std::cout<<"2. Listar"<<std::endl;
        std::cout<<"3. Marcar concluída"<<std::endl;
        std::cout<<"4. Sair"<<std::endl;
        std::cout<<"Escolha: "<<std::endl;
    }
int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int opcao;

    while(true){
        menu();
        std::cin>>opcao;

        switch(opcao){
            case 1:
                adicionar();
                break;
            case 2:
                listar();
                break;
            case 3:
                marcarConcluida();
                break;
            case 4:
                std::cout<<"Até logo!"<<std::endl;
                return 0;
            default:
                std::cout<<"Opção inválida!"<<std::endl;
        }
    }
    
    return 0;
}