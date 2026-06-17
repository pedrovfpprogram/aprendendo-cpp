#include <iostream>
using namespace std;

void texto();
void soma(int n1, int n2);
int soma2(int n1, int n2);

int main(){
    
    int res=soma2(175,25);
    cout << res << endl;
    return 0;

}

void texto(){
    cout << "\nCanal Professor Bruno" << endl;
}

void soma(int n1, int n2){
    cout << n1 + n2 << endl;
}

int soma2(int n1, int n2){
    return n1 + n2;
}