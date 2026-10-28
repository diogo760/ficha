#include <iostream>
#include <string.h>

using namespace std;

char grelha[9] = {'0', '1', '2','3','4','5','6','7','8'};

void tabela(){
    cout << "\n " <<grelha[0] << "|" << grelha[1] << "|" << grelha[2];
    cout << "\n " <<grelha[3] << "|" << grelha[4] << "|" << grelha[5];
    cout << "\n " <<grelha[6] << "|" << grelha[7] << "|" << grelha[8];
    cout << "\nonde queres jogar";
}

int main () {

    string peca= "x";
    int posicao;
     bool jogoterminou =false, aceitajogada;

    while (!jogoterminou){
        tabela();
        cin >> posicao;

    if (aceitajogada){
        if (peca=="x"){
            peca="o";
        }else if (peca=="x") {
        peca= "x";
        cout << "\nposicao ja preenchida";
        }
    }


        switch(posicao) {
            case 0:
                if (grelha[0]=='0'){
                    grelha[0] = peca[0];
                    aceitajogada=true;




            case 1:
                if (grelha[1]=='1'){
                    grelha[1] = peca[0];
                    aceitajogada=true;
        }
            break;



            case 2:
                if (grelha[2]=='2'){
                    grelha[2] = peca[0];
                    aceitajogada=true;
        }
            break;



            case 3:
                if (grelha[3]=='3'){
                    grelha[3] = peca[0];
                    aceitajogada=true;
        }
            break;



            case 4:
                if (grelha[4]=='4'){
                    grelha[4] = peca[0];
                    aceitajogada=true;
        }
            break;



            case 5:
                if (grelha[5]=='5'){
                    grelha[5] = peca[0];
                    aceitajogada=true;
        }
            break;



            case 6:
                if (grelha[6]=='6'){
                    grelha[6] = peca[0];
                    aceitajogada=true;
        }
            break;


            case 7:
                if (grelha[7]=='7'){
                    grelha[7] = peca[0];
                    aceitajogada=true;
        }
            break;



            case 8:
                if (grelha[8]=='8'){
                    grelha[8] = peca[0];
                    aceitajogada=true;
        }
            break;


        }







    }

    }
    return 0;
    }

