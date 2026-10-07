#include <iostream>

using namespace std;


int main () {

    int opcao;
     for (int i=1;i>=0;i=0){
    cout << "se escolheres \n0: sair do programa\n";
    cout << "1 \n";
    cout << "2 \n";
    cout << "3\n";

    cin >> opcao;

    switch (opcao)
    {
        case 0:
            cout << "";
            break;
        case 1:
            cout << "es um bom programador";
            break;
        case 2:
            cout << "es muito bom programador";
            break;
        case 3:
            cout << "es um excelente programador ";
            break;
        default:
            cout << "nao sei oque estas a a pedir";
            break;
    }
     if(opcao==0)
        break;
     }



    return 0;
}
