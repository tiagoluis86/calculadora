#include <iostream>

int main()
{
    std::cout << "Calculadora Simples\n";
    std::cout << "Digite um número: ";

    float num{ }; //declara a variável num como int
    std::cin >> num; //pega o valor da variável num da entrada do usuário

    std::cout << "Digite outro número: ";

    float outronum{ };
    std::cin >> outronum;

    std::cout << "Qual operação você deseja fazer?\n + Soma\n - Subtração\n * Multiplicação\n / Divisão \n";

    char operacao{ };
    std::cin >> operacao;

    switch(operacao) {
        case '+': 
        std::cout << "A soma deu: " << num + outronum << '\n';
        std::cout << "Operação escolhida: " << operacao << '\n';
        break;    

        case '-':
        std::cout << "A subtração deu: " << num - outronum << '\n';
        std::cout << "Operação escolhida: " << operacao << '\n';
        break;
  
        case '*':
        std::cout << "A multiplicação deu: " << num * outronum << '\n';
        std::cout << "Operação escolhida: " << operacao << '\n';
        break;

        case '/':
        std::cout << "A divisão deu: " << num / outronum << '\n';
        std::cout << "Operação escolhida: " << operacao << '\n';
        break;

        default:
        std::cout << "Operação inválida" << '\n';
    }

    return 0;
}