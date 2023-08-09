# include <iostream>
using namespace std;

int main(){
    // ExpA ? ExpB : ExpC
    // if ExpA is true, then ExpB
    // if ExpA is false, then ExpC
    int a = 0;
    int b = 10;
    int c = 20;
    int d;

    d = a > b ? b : c;
    cout << "D = " << d << endl;

    (a > b ? a : b) = 10;
    cout << "A = " << a << endl;
    cout << "B = " << b << endl;

    system("Pause");
    return 0;
}