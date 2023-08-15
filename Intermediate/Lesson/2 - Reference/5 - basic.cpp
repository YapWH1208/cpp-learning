# include <iostream>
using namespace std;

int main(){
    int a = 10;
    int &b = a;// Reference a to b

    cout << "A = " << a << endl;
    cout << "B = " << b << endl;

    // When b changes, a will also be changed
    b = 100;

    cout << "A = " << a << endl;
    cout << "B = " << b << endl;

    system("Pause");
    return 0;
}