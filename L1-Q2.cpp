#include <iostream>

using namespace std;

int main(){
    float metro, mPolegada, mPes, mJardas, mMilha;
    const float polegada = 39.3701, pes = 3.28084, jardas = 1.09361, milha = 0.000621371;
    cout << "Digite o tamanho em metros - "<< endl;
    cin >> metro;

    mPolegada = (metro*39.3701);
    mPes      = (metro*3.28084);
    mJardas   = (metro*1.09361);
    mMilha    = (metro*0.000621371);

    cout << metro << " metros equivale a " << mPolegada << " polegada(s), " << mPes << " pes," << mJardas << " jarda(s), " << mMilha << " milha(s)" << endl;

    return 0;
}
