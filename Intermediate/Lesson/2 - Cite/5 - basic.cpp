# include <iostream>
using namespace std;

int main(){
    int a = 10;
    int &b = a;

    cout << "A = " << a << endl;
    cout << "B = " << b << endl;

    b = 100;

    cout << "A = " << a << endl;
    cout << "B = " << b << endl;

    system("Pause");
    return 0;
}