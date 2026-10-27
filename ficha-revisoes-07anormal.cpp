#include <iostream>

using namespace std;


int main () {
    int ninteiro1,ninteiro2;
    float nreal;
    float dobroemetade,triploesoma,cubo;

    cout << "diz me um numero inteiro: ";
    cin >> ninteiro1;
    cout << "\n diz me outro numero inteiro";
    cin >> ninteiro2;
    cout << "\n agora diz me um numero real";
    cin >> nreal;

    dobroemetade = (ninteiro2*2) * (ninteiro1/2);

    triploesoma = (3*nreal)+ninteiro1;

    cubo = (nreal*nreal*nreal);


    cout << "a) " << dobroemetade << " b) " << triploesoma << " c) " << cubo;


    return 0;
}
