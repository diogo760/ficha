#include <iostream>

using namespace std;


int main () {
    int salario, salariod,salariom, salarioa, horaspmes;

    cout << "diz me quanto ganhas por hora";
    cin >> salario;
    cout << "agora diz quantas horas trabalhas por mes";
    cin >> horaspmes;

    salariod = salario*8;
    salariom = salario * horaspmes;
    salarioa = salariom*12;

    cout << "por dia ganhas " << salariod << " euros, por mes ganhas aproximadamente " << salariom << "euros e por anos ganhas aproximadamente " << salarioa <<" euros";



    return 0;
}
