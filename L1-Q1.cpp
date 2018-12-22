#include <iostream>

using namespace std;

int main(){
    float expressao;
    int hora;
    cout << "Digite a quantidade de horas - ";
    cin >> hora;
    expressao = (hora/24.0);
    cout << hora << " hora(s) equivale a " << expressao << " dias(s)" << endl;

    return 0;
}
