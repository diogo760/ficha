#include<iostream>
#include<stdio.h>
using namespace std;

const int LINHAS =6;
const int COLUNAS =9;

void mostrarTabuleiro(string arr[LINHAS][COLUNAS]);
int pedePecaJogador();
void colocaPecaTabuleiro(string peca, int linha, int coluna, string arr[LINHAS][COLUNAS]);
bool tabuleiroCheio(string arr[LINHAS][COLUNAS]);
bool ganhouJogo(int &quemGanhou, string arr [LINHAS][COLUNAS]);

int main(){

    string tabuleiro[LINHAS][COLUNAS];

    tabuleiro[0][1] = "s";
    mostrarTabuleiro(tabuleiro);
    mostrarTabuleiro(tabuleiro);

    return 0;
}
void mostrarTabuleiro(string arr[LINHAS][COLUNAS]){
    cout << "Linha 1: Coluna2:-" << arr[0][1] << "-";
    arr[0][1] ="a";
}


