#include<iostream>
#include<Windows.h>

int main(){

    // Configura o terminal do Windows para aceitar acentuação corretamente (UTF-8)
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    // Agora o array tem exatamente 8 elementos, com os números 2 e 3 duplicados.
    int numeros[] = {1, 2, 3, 2, 4, 5, 3, 6};
    int tamanho = 8; // Perfeito! O tamanho corresponde exatamente à quantidade de itens.

    std::cout<<"==== NÚMEROS DUPLICADOS ===="<<std::endl;
    std::cout<<std::endl;

    // Exibe o estado atual do array para o usuário
    std::cout<<"Array: ";
    for(int i = 0; i < tamanho; i++){
        std::cout<<numeros[i]<<" ";
    }
    std::cout<<std::endl;

    std::cout<<"Números duplicados: "<<std::endl;
    
    // O primeiro laço escolhe o número atual para comparação (Ex: primeiro o 1, depois o 2, depois o 3...)
    for(int i = 0; i < tamanho; i++){
        
        // O segundo laço varre apenas os números que estão À FRENTE do número escolhido.
        // Isso evita comparar um número com ele mesmo ou repetir verificações antigas.
        for(int j = i + 1; j < tamanho; j++){
            
            // Se o número da posição 'i' for igual ao número da posição 'j', achamos uma duplicata!
            if(numeros[i] == numeros[j]){
                std::cout<<numeros[i]<<" aparece mais de uma vez!"<<std::endl;
                
                // O break interrompe o laço interno 'j'. 
                // Assim, se o número tiver mais repetições pela frente, evitamos printar mensagens repetidas para ele.
                break; 
            }
        }
    }

    return 0;
}