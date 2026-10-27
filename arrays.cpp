#include <iostream>
#include <string.h>
using namespace std;

const int N=5;

int main () {


    char nome[31],primeiraletra =' ',sundaletra =' ';
     // até 30 letras + o '\0'
    printf("Nome: ");
     //scanf("%30s", nome);
     // SEM & - o nome do vetor já é um endereço

     cin.getline(nome, 31);

     printf("\nOla, %s!\n", nome);

     printf("\nOla, %c!\n", nome[0]);
     cout << "\nOla," << nome[0] << "!\n";



        return 0;
    }
