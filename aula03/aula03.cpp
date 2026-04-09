#include <iostream>

using namespace std;
//A linha #include <iostream> é uma diretiva de pré-processamento que inclui a biblioteca de entrada e saída padrão do C++. Ela permite que o programa use objetos como cout para imprimir mensagens no console e cin para ler entradas do usuário. A linha using namespace std; é usada para evitar a necessidade de prefixar os objetos da biblioteca padrão com std::, tornando o código mais limpo e fácil de ler.

int main(){
        cout << "Teste\nCurso C++\n";
        //cout é um objeto de saída padrão em C++ que representa a saída para o console. Ele é usado para imprimir mensagens ou valores na tela. O operador << é usado para enviar dados para o cout, e endl é usado para adicionar uma nova linha após a mensagem.
        system("pause");
        //system serve para pausar o programa, ou seja, ele espera o usuário apertar uma tecla para continuar a execução do programa. Ele é útil para evitar que o console feche imediatamente após a execução do programa, permitindo que o usuário veja a saída antes de fechar a janela.
    return 0;
}