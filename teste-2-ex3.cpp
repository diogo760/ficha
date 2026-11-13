#include <iostream>

using namespace std;

int multiplica2Nums(int numero1, int numero2){
    int soma=0;

    for(int i=numero1; i<(numero2+1); i++){
        soma=soma+i;
        cout << i << "\n";
    }

    cout << "Soma de todos os numeros = ";


    return(int) soma;
}

int main(){

    int primeiro_numero, segundo_numero;

    cout << "AMBOS OS NUMEROS TERAO QUE SER INTEIROS\n\n";
    cout << "Diz-me o primeiro numero:";
    cin >> primeiro_numero;
    cout << "\nAgora diz-me o segundo numero:";
    cin >> segundo_numero;
    cout <<multiplica2Nums(primeiro_numero, segundo_numero);


    return 0;
}

