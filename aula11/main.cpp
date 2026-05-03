#include <iostream>

using namespace std;

int main() {

    int num;

    //1 2 3 4 5 6 7 8 9 10 
    //<3 ou >8
    //Operador and - &&
    //Operador or - ||
    //Operador not - !

    num=9;

    if((num >= 3 && num <= 6) || (num > 9 && num < 15) || (num > 15 && num < 20)){
        cout << "\n\nValor aceito\n";
    } else {
        cout << "\n\nNão aceito\n";
    }

    return 0;

}