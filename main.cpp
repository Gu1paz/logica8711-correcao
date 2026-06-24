#include<iostream>
#include<Windows.h>

int main(){

    // Configura o terminal do Windows para aceitar acentuação corretamente (UTF-8)
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    // Declaração de uma matriz 3x4 (3 linhas e 4 colunas)
    int matriz[3][4] = {
        {10, 25, 5, 40},
        {35, 8, 30, 12},
        {20, 3, 18, 35}
    };

    // Inicializamos o maior e o menor com o primeiro elemento da matriz [0][0]
    int maior = matriz[0][0];
    int menor = matriz[0][0];
    
    // Variáveis para guardar as coordenadas (índices) do maior e do menor
    int linhaM = 0, colunaM = 0;
    int linhaN = 0, colunaN = 0;

    std::cout<<"==== Min e Max em Matriz ===="<<std::endl;

    std::cout<<"Matriz: "<<std::endl;
    
    // LAÇOS ANINHADOS:
    // O laço externo (i) controla as LINHAS (vai de 0 a 2)
    for(int i = 0; i < 3; i++){
        // O laço interno (j) controla as COLUNAS (vai de 0 a 3)
        for(int j = 0; j< 4; j++){
            // Imprime o elemento atual seguido de um espaço
            std::cout<<matriz[i][j]<<"\t"; // Usei '\t' (tabulação) para alinhar as colunas perfeitamente

            // Lógica para testar se o elemento atual é o MAIOR de todos até agora
            if(matriz[i][j] > maior){
                maior = matriz[i][j];
                linhaM = i; // Salva a linha do maior
                colunaM = j; // Salva a coluna do maior
            }
            
            // Lógica para testar se o elemento atual é o MENOR de todos até agora
            if(matriz[i][j] < menor){
                menor = matriz[i][j];
                linhaN = i; // Salva a linha do menor
                colunaN = j; // Salva a coluna do menor
            }
        }
        // AJUSTE: Ao terminar de rodar todas as colunas de uma linha, 
        // saltamos para a próxima linha no terminal para manter o formato de grade.
        std::cout<<std::endl;
    }

    // Exibição dos resultados finais
    std::cout<<std::endl;
    std::cout<<"Maior: "<<maior<<" na posição ["<<linhaM<<"]["<<colunaM<<"]"<<std::endl;
    std::cout<<"Menor: "<<menor<<" na posição ["<<linhaN<<"]["<<colunaN<<"]"<<std::endl;

    return 0;
}