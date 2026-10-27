#include <iostream>

using namespace std;


int main () {
    int ganhoh,horasm,ganhom,ganhoa;

    cout << "diz me quantos ganhas por hora ";
    cin >> ganhoh;
    cout << "\n agora diz-me quantas horas trabalhas no mes ";
    cin >>horasm;

    ganhom= horasm*ganhoh;
    ganhoa= ganhom*12;

    cout << " ganhas por hora:" << ganhoh << " euros \n em media ganhas por mes:" << ganhom << " euros \n e por ano ganhas em media:" << ganhoa << " euros";



    return 0;
}
