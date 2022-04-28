#include <iostream>
using namespace std;

int main()
{
    cout << "Calculadora Simples\n";
    cout << "Digite um número: ";

    float num{ }; //declara a variável num como int
    cin >> num; //pega o valor da variável num da entrada do usuário

    cout << "Digite outro número: ";

    float outronum{ };
    cin >> outronum;

    cout << "Qual operação você deseja fazer?\n + Soma\n - Subtração\n * Multiplicação\n / Divisão \n";

    char operacao{ };
    cin >> operacao;

    switch(operacao) {
        case '+': 
        cout << "A soma deu: " << num + outronum << '\n';
        cout << "Operação escolhida: " << operacao << '\n';
        break;    

        case '-':
        cout << "A subtração deu: " << num - outronum << '\n';
        cout << "Operação escolhida: " << operacao << '\n';
        break;
  
        case '*':
        cout << "A multiplicação deu: " << num * outronum << '\n';
        cout << "Operação escolhida: " << operacao << '\n';
        break;

        case '/':
        cout << "A divisão deu: " << num / outronum << '\n';
        cout << "Operação escolhida: " << operacao << '\n';
        break;

        default:
        cout << "Operação inválida" << '\n';
    }

    return 0;
}