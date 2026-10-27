#include <iostream>

using namespace std;


int main () {
    float massa;
    float aceleracao;
    float peso;
    cout << "diz me o peso";
    cin >> peso;
    cout << "agora diz me a aceleracao da gravidade";
    cin >> aceleracao;

    massa = peso /aceleracao;

    cout << "a massa do corpo e " << massa;


    return 0;
}
