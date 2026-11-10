#include<iostream>
using namespace std;

int main(){
    int numeros_somar;
    int N=0;
    int nums[N];
    int soma=0;
    int somarse;
    int numero;

    cout<< "quantos numeros queres somar??\n";
    cin >> numeros_somar;
    N=numeros_somar;

    if (numeros_somar==1){
        cout << "qual e o numero ";
        cin >> somarse;
        cout << "a soma e " << somarse;

    }else{

        for (int i = 0; i != N; i++){

            cout << "numero " <<( i + 1) << " : ";
            cin >> numero;
            soma = numero+numero;
        }
        cout << soma;

    }

    return 0;

}

