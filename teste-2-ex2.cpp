#include <iostream>

using namespace std;

int multiplica2Nums(int numero1 ,int numero2){
    int resultado_multiplicacao;

    resultado_multiplicacao=numero1*numero2;
    cout << "\nO resultado e: " << resultado_multiplicacao;
    //return numero1 * numero2;
}

int main(){

    int primeiro_numero, segundo_numero;

    cout << "diz-me um numero para multiplicar pelo segundo";
    cin >> primeiro_numero;
    cout << "Agora diz-me o segundo numero:";
    cin >> segundo_numero;
    multiplica2Nums(primeiro_numero, segundo_numero);






    return 0;
    }

