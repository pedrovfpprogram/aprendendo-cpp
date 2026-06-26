#include <iostream>
using namespace std;
void fatorial(int n, int total=1, int atual=1);
int main(){

    fatorial(4);
    return 0;

}

void fatorial(int n, int total, int atual){
    total = total * atual;
    if (n > atual){
        fatorial(n,total,++atual);
    } else {
        cout << total << endl;
    }
}