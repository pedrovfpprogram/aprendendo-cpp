#include <iostream>

using namespace std;

int main() {

    int val;

    cout << "Selecione uma transporte:\n";
    cout << "[1] - Carro, [2] - Moto, [3] - Aviao, [4] - Helicoptero" << endl;

    cin >> val;

    switch (val){
        case 1:
        case 2:
            cout << "Transporte terrestre" << endl;
            switch (val) {
                case 1:
                    cout << "Carro selecionado" << endl;
                    break;
                case 2:
                    cout << "Moto selecionada" << endl;
                    break;
            }
            break;
        case 3:
        case 4:
            cout << "Transporte aereo" << endl;
            switch (val) {
                case 3:
                    cout << "Aviao selecionado" << endl;
                    break;
                case 4:
                    cout << "Helicoptero selecionado" << endl;
                    break;
            }
            break;
        default:
            cout << "Transporte selecionado invalido" << endl;
    }

    cout << "\nPrograma finalizado" << endl;

    return 0;

}