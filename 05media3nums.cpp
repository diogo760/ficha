#include <iostream>

using namespace std;


int main () {
    float media, primeironumero,segundonumero,terceironumero;
    // os numeros estao em float para o resultado aparecer com casas decimais

    cout << "vou fazer a media de tres numeros inteiros \n";
    cout << "diz me o primeiro numero:";
    cin >> primeironumero;
    cout << "\nagora diz me o segundo numero";
    cin >> segundonumero;
    cout << "\nagora diz me o terceiro numero:";
    cin >> terceironumero;

    media=(primeironumero+segundonumero+terceironumero)/3;

    cout << "a media e " << media;
    return 0;
}
