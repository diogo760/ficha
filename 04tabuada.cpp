#include <iostream>

using namespace std;


int main () {

    int numerotabuada,tabuada;
    //int i=0;
    cout << "diz me o numero para veres a tabuada desse numero ate ao 10 ";
    cin >> numerotabuada; // numero do utilizador


    for (int i=1; i<=10;i++){

    cout <<numerotabuada << " x "<< i<< "=" <<numerotabuada *i << "\n" ;
    }


    return 0;
}
