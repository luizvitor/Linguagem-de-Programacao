#include <iostream>

using namespace std;

int main(){
    int a, b, aux;
    cout << "Digite o valor de a: "; cin >> a;
    cout << "Digite o valor de b: "; cin >> b;
    cout << "Valor inicial:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << "\n\n";

    aux = b;
    b = a;
    a = aux;

    cout << "Valor final: " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
