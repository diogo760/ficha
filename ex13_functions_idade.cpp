#include <iostream>
#include <string.h>
#include <time.h>
using namespace std;

time_t now=time (NULL);
struct tm *t = localtime(&now);






void mostrarMenu(){
    cout << "menu:\n";
    cout << "1: idade\n";
    cout << "2: sair do programa";
    cout << "\nr:";
}


int getyear(){ return 2026;}
int getMonth(){ return 10;}
int getDay(){ return 2026;}

int aminhaIdade(int anoNascimento=2010, int mesNascimento=7, int dia=28){
    int aux= getyear() - anoNascimento;

    if(getMonth() < mesNascimento){
        aux--;
    }else{
        if (getDay() < dia && getMonth() == mesNascimento){
            aux--;
        }
        }
        return aux;
    }





int main () {
    int anoNascimento;
    int escolhadomenu, fechar;

    int ano;

    cout << "a minha idade =" << aminhaIdade(2010, 7,28) << "anos \n";

    ano=getyear();

    while (escolhadomenu !=2){

        cout << "\n";

        mostrarMenu();

        cin >> escolhadomenu;

    if (escolhadomenu==1){

    //  cout << ano;
    cout << "em que ano nasceste?";
    cin >> anoNascimento;

    aminhaIdade(2026-anoNascimento);
    cout << aminhaIdade;
}
}
    return 0;
    }

