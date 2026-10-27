#include <iostream>

using namespace std;


int main () {
    float pi=3.1416;
    float raio,area;

    cout << "diz-me o raio do circulo e eu vou te dar a area ";
    cin >> raio;

    area=pi*(raio*raio);

    cout << "a area do circulo e " << area;

    return 0;
}
