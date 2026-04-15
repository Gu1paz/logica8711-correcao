#include <iostream>
#include <string>
#include <thread> //para lidar com o tempo de execução
#include <chrono> //para definir unidades de tempo (ms, segundos)

int main()
{

    int opcao;

    std::cout << "Digite um valor para opção: " << std::endl;
    std::cin >> opcao;

    switch (opcao)
    {
    case 1:
        std::cout << "domingo!" << std::endl;
        break;
    case 2:
        std::cout << "Segunda!" << std::endl;
        break;
    case 3:
        std::cout << "Terça!" << std::endl;
        break;
    case 4:
        std::cout << "Quarta!" << std::endl;
        break;
    case 5:
        std::cout << "Quinta!" << std::endl;
        break;
    case 6:
        std::cout << "Sexta!" << std::endl;
        break;
    case 7:
        std::cout << "Sábado!" << std::endl;
        break;
    default:
        std::cout << "Número inválido!" << std::endl;
    }

    return 0;
}