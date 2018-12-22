#include <iostream>

using namespace std;

int main(){
    int i = 1, j = 2, k = 3, n = 2;
    float x = 3.3, y = 4.4;
    int a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16;

    //A
    a1 = i < j + 3;
    cout << "A - " << a1 << endl;
    //B
    a2 = 2*i - 7 <= j - 8;
    cout << "B - " << a2 << endl;
    //C
    a3 = -x + y >= 2.0*y;
    cout << "C - " << a3 << endl;
    //D
    a4 = x == y;
    cout << "D - " << a4 << endl;
    //E
    a5 = x != y;
    cout << "E - " << a5 << endl;
    //F
    a6 = i + j + k == -2*-k;
    cout << "F - " << a6 << endl;
    //G
    a7 = !(n-j);
    cout << "G - " << a7 << endl;
    //H
    a8 = !n - k;
    cout << "H - " << a8 << endl;
    //I
    a9 = !x * !x;
    cout << "I - " << a9 << endl;
    //J
    a10 = i && j && k;
    cout << "J - " << a10 << endl;
    //K
    a11 = i || j - 3 && 0;
    cout << "K - " << a11 << endl;
    //L
    a12 = i < j && 2 >= k;
    cout << "L - " << a12 << endl;
    //M
    a13 = i < j || 2 >= k;
    cout << "M - " << a13 << endl;
    //N
    a14 = i == 2 || j == 4 || k == 5;
    cout << "N - " << a14 << endl;
    //O
    a15 = i = 2 || j == 4 || k == 5;
    cout << "O - " << a15 << endl;
    //P
    a16 = x <= 5.0 && x != 1.0 || i > j;
    cout << "P - " << a16 << endl;

    return 0;
}
