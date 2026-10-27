#include <iostream>

using namespace std;


int main () {
    float f, c;

    cout << "vou passar de graus Farenheit para graus Celsius\n";
    cout << "diz me os graus Farenheit";
    cin >> f;

    c = (5 * (f-32) / 9);

    cout << f << " graus Farenheit em graus Celsius sao:" << c << " graus Celsius";



    return 0;
}
