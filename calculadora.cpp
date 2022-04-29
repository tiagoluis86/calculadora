#include <iostream>
using namespace std;

int main()
{

    while(true) {
        float num{ }; //declara a variável num como int
        float outronum{ };
        char operacao{ };
        int menu{ };

        cout << "Calculadora Simples\n";

        cout << "1 - Nova Operação, 2 - Sair\n";
        cin >> menu;

        if (menu == 1) {

            cout << "Qual operação você deseja fazer?\n + Soma\n - Subtração\n * Multiplicação\n / Divisão \n";    
            cin >> operacao;      

            cout << "Digite um número: "; 
            cin >> num; //pega o valor da variável num da entrada do usuário

            cout << "Digite outro número: ";    
            cin >> outronum;        

            switch(operacao) {
                case '+': 
                cout << "A soma deu: " << num + outronum << '\n';       
                break;    

                case '-':
                cout << "A subtração deu: " << num - outronum << '\n';        
                break;
        
                case '*':
                cout << "A multiplicação deu: " << num * outronum << '\n';        
                break;

                case '/':
                cout << "A divisão deu: " << num / outronum << '\n';       
                break;

                default:
                cout << "Operação inválida" << '\n';
            }

        }
        else {
            break;
        }    
    }

    return 0;
}