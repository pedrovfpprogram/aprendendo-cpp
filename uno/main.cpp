#include <iostream>
#include <string>
#include <stack>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    srand(time(0));
    //Estrutura das cartas
    struct cartas{
        int numero;
        string cor;
    };
    //Adicionar cartas
    cartas baralhoArray[40];
    int indice = 0;
    for (int c = 0; c < 4; c++){
        //Códigos das cores das cartas:
        //0 - Vermelho
        //1 - Amarelo
        //2 - Azul
        //3 - Verde 
        for (int n = 0; n < 10; n++){
            if(c==0) {
                cartas Carta = {n,"Vermelho"};
                baralhoArray[indice] = Carta;
                indice++;
            } else if (c==1){
                cartas Carta = {n,"Amarelo"};
                baralhoArray[indice] = Carta;
                indice++;
            } else if (c==2){
                cartas Carta = {n,"Azul"};
                baralhoArray[indice] = Carta;
                indice++;
            } else {
                cartas Carta = {n,"Verde"};
                baralhoArray[indice] = Carta;
                indice++;
            }
        }
    }
    //Embaralhamento
    for(int i = 1; i < 201; i++){
        int indA = rand() % 40;
        int indB = rand() % 40;
        cartas temp = baralhoArray[indA];
        baralhoArray[indA] = baralhoArray[indB];
        baralhoArray[indB] = temp;
    }
    //Criar baralho embalharado
    stack <cartas> baralho;
    for(int i = 0; i < 40; i++){
        baralho.push(baralhoArray[i]);
    }
    //Criando jogadores e dando as cartas
    cartas jogador[20];
    int qtdJogador = 0;
    cartas CPU[20];
    int qtdCPU = 0;
    for(int i = 0; i < 7; i++){
        jogador[qtdJogador] = baralho.top();
        qtdJogador++;
        baralho.pop();
        CPU[qtdCPU] = baralho.top();
        qtdCPU++;
        baralho.pop();
    }
    //lógica do jogo
    //Carta na mesa
    stack <cartas> descarte;
    descarte.push(baralho.top());
    baralho.pop();
    //Turno 0 - Cpu
    //Turno 1 - Jogador
    int turno = 1;
    //Loop do jogo
    while(true){
        if(qtdCPU == 0){
            cout << "CPU venceu o jogo" << endl;
            break;
        }
        if(qtdJogador == 0){
            cout << "Jogador venceu" << endl;
            break;
        }
        if(turno == 0) {
            cout << "Vez da Cpu" << endl; 
        } else {
            cout << "Vez do Jogador" << endl;
        }
        cout << "Carta no topo do descarte: " << descarte.top().numero << " " << descarte.top().cor << endl;
        //Quando é a vez do jogador
        if (turno == 1) {
            cout << "Cartas disponíveis: ";
            for(int i = 0; i < qtdJogador; i++) {
                cout << i << " - " << jogador[i].numero << " " << jogador[i].cor;
            }
            int opcao;
            cout << "\n1 - Comprar carta\n2 - Escolher carta para jogar" << endl;
            cin >> opcao;
            switch(opcao){
                case 1:
                    jogador[qtdJogador] = baralho.top();
                    baralho.pop();
                    qtdJogador++;
                    turno = 0;
                    continue;
                case 2:
                {
                    unsigned int escolhida;
                    cout << "Digite o indice da carta(numero que fica na frente): ";
                    cin >> escolhida;
                    if (escolhida >= qtdJogador){
                        cout << "Carta nao identificada. Tente novamente" << endl;
                        continue;
                    }
                    if(jogador[escolhida].cor == descarte.top().cor || jogador[escolhida].numero == descarte.top().numero){
                        descarte.push(jogador[escolhida]);
                        for(int i = escolhida; i <= qtdJogador-2;i++){
                            jogador[i]=jogador[i+1];
                        }
                        qtdJogador--;
                        turno = 0;
                    } else {
                        cout << "A carta escolhida nao pode ser jogada" << endl;
                    }
                }
                    break;
                default:
                    cout << "Opcao nao encontrada" << endl;
                    break;
            }
        }
    }
    return 0;
    void semCarta(carta cartaTopo){
        descarte.pop();
        
    }
}