#include<iostream>
using namespace std;
#define N 10

int main(){

    int arraynums[N] = {10, 8, -5, 6, 12,4, -7, 14, 3, -3};
    int aux;

    for(int j=0; j<(N-1); j++){
        for (int i=(j+1); i<N; i++){
            if(arraynums[j] > arraynums [i]){
                aux = arraynums[i];
                arraynums[i] = arraynums[j];
                arraynums [j] = aux;
            }
        }
    }
    for (int i=0;i<N; i++){
        cout << "\n " << arraynums[i];
    }
    cout << "\n\n************* FIM **************";
    return 0;

}

