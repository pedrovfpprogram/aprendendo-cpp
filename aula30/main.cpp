#include <iostream>
#include <queue>
using namespace std;

int main(){

    queue <string> cartas;

    cartas.push("Rei de Copas");
    cartas.push("Rei de Espadas");
    cartas.push("Rei de Ouros");
    cartas.push("Rei de Paus");

    cout << "Tamanho da fila: " << cartas.size() << endl;
    cout << "Primeiro da fila: " << cartas.front() << endl;
    cout << "Ultimo da fila: " << cartas.back() << endl;
    /*while(!cartas.empty()) {
        cout << "Primeira carta: " << cartas.front() << endl;
        cartas.pop();
    }*/

    cartas.pop();

    /*
    empty
    size
    front
    back
    push
    pop
    */

    return 0;
}