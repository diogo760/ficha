#include <iostream>

using namespace std;

int main () {
int n1;
    cout << "escolhe um numero \n";
    cin >> n1;

    if (n1<0){
    cout << "numero negativo";

    }else if (n1==0){
    cout << "numero Neutro";

    }else if (n1>0 && n1<100){
    cout << "numero positivo pequeno";

    }else {
    cout << "numero enorme";
    }


return 0;
}
