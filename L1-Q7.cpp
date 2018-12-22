#include <iostream>

using namespace std;

int main(){
    int a, b, c, d, e, f;
    char teste = 'j';
    //A
    a = 1 > 2;
    cout << a << endl;
    //B
    cout << !a << endl;
    //C
    b = 3 == 2;
    cout << b << endl;
    //D
    c = !(-5);
    cout << c << endl;
    //E
    d = teste != teste;
    cout << d << endl;
    //F
    e = teste != teste + 2;
    cout << e << endl;
    //G
    f = teste != teste == teste;
    cout << f << endl;

    return 0;
}
