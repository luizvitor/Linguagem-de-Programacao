#include <iostream>

using namespace std;

int main(){
    int minuto, dia, hora, minuto1;
    cout << "Digite o tempo em minutos - ";
    cin >> minuto;

    dia     = minuto/1440;
    hora    = (minuto%1440)/60;
    minuto1 = (minuto%1440)%60;

    cout << minuto << " minutos = " << dia << " dias, " << hora << " horas e " << minuto1 << " minutos" << endl;












    return 0;
}
