#include <iostream>
#include <cmath>

using namespace std;

int main(){
    const float pi = 3.14159;
    float volume, area, altura, geratriz, rm,rM;

    cout << "Digite a altura - ";
    cin >> altura;

    cout << "Digite o raio A - ";
    cin >> rM;

    cout << "Digite o raio B - ";
    cin >> rm;

    geratriz = sqrt(pow(rM,2) + pow(rm,2));
    volume   = ((pi*altura)/3)*(pow(rM,2)+(rM*rm)+pow(rm,2));
    area     = pi*geratriz*(rM+rm);

    cout << "O tronco de cone tem:" << endl;
    cout << volume << " u.v " << endl;
    cout << area   << " u.a " << endl;

    return 0;
}
