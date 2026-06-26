#include <iostream>
using namespace std;
void fibonnacci(int anterior=0, int agora=1,int cont = 0);
int main(){

    fibonnacci();

    return 0;

}

void fibonnacci(int anterior, int agora, int cont){
    if(anterior == 0) cout << anterior;
    cout << "," << agora+anterior;
    if(cont < 10){
        fibonnacci(agora,agora+anterior,++cont);
    } else{
        cout << endl;
    }
}