#include <iostream>

using namespace std;


int main () {

    int posicao = 0;
    string peca= "X";
    string p1="1",p2="2",p3="3",p4="4",p5="5",p6="6",p7="7",p8="8",p9="9";
    bool jogoterminou =false, aceitajogada;
    while (!jogoterminou) {
        cout << "\n " <<p1 << "|" << p2 << "|" << p3;
        cout << "\n " <<p4 << "|" << p5 << "|" << p6;
        cout << "\n " <<p7 << "|" << p8 << "|" << p9;
        cout << "\nonde queres jogar";
        cin >> posicao;

        switch(posicao) {
            case 1:
                if (p1=="1"){
                    p1 = peca;
                    aceitajogada=true;
        }
            break;
        default:
            cout << "\n Burrinho da silva... 1 a 9 apenas \n";
            break;
    }
    if (aceitajogada){
        if (peca=="x"){
            peca="o";
        }else {
        peca= "x";
        }
        } else {
            cout << "\nposicao ja preenchida";
        }
    }
         switch(posicao) {
            case 2:
                if (p2=="2"){
                    p2 = peca;
                    aceitajogada=true;
        }
            break;
         }

          switch(posicao) {
            case 3:
                if (p3=="3"){
                    p3 = peca;
                    aceitajogada=true;
        }
            break;
         }

          switch(posicao) {
            case 4:
                if (p4=="4"){
                    p4 = peca;
                    aceitajogada=true;
        }
            break;
         }

          switch(posicao) {
            case 5:
                if (p5=="5"){
                    p5 = peca;
                    aceitajogada=true;
        }
            break;
         }

          switch(posicao) {
            case 6:
                if (p6=="6"){
                    p6 = peca;
                    aceitajogada=true;
        }
            break;
         }

          switch(posicao) {
            case 7:
                if (p7=="7"){
                    p7 = peca;
                    aceitajogada=true;
        }
            break;
         }

          switch(posicao) {
            case 8:
                if (p8=="8"){
                    p8 = peca;
                    aceitajogada=true;
        }
            break;
         }

          switch(posicao) {
            case 9:
                if (p9=="9"){
                    p9 = peca;
                    aceitajogada=true;
        }
            break;
         }




    return 0;
}
