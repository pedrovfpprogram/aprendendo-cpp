#include <iostream>
#include <list>
using namespace std;

int main(){

    list<int> aula;
    int tam;
    list<int>::iterator it;

    tam = 10;
    for(int i = 0;i < tam;i++){
        aula.push_back(i);
    }
    cout << "Tamanho: " << aula.size() << endl;

    tam = aula.size();
    for(int i = 0;i < tam;i++){
        cout << aula.front() << endl;
        aula.pop_front();
    }

    return 0;
}