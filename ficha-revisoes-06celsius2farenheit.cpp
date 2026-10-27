#include <iostream>

using namespace std;


int main () {
    float f, c;

    cout << "vou passar de graus Celsius para graus Farenheit \n";
    cout << "diz me os graus Celsius";
    cin >> c;

    f= 32 + ((c*9) /5 );


    cout << c << " graus Celsius em graus Farenheit sao:" << f<< " graus Farenheit";



    return 0;
}
