#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float r, perimetro, area, volume;
    const float pi = 3.14159;

    cout << "Digite o raio do circulo - ";
    cin >> r;

    perimetro = 2*pi*r;
    area      = pi*pow(r,2);
    volume    = (4/3)*pi*pow(r,3);

    cout << "Perimetro: " << perimetro << endl;
    cout << "Area: " << area << endl;
    cout << "Volume: " << volume << endl;

    return 0;
}
