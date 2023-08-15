# include <iostream>
using namespace std;

int main(){
    int a = 10;
    int b = 20;

    cout << "A = " << a << endl;
    cout << "B = " << b << endl;

    //int &c; //Citing must initialize with a value/variable
    int &c = a; //Once Cite, it cannot be changed
    c = b; // This will only give values not cite

    cout << "\nA = " << a << endl;
    cout << "B = " << b << endl;
    cout << "C = " << c << endl;

    system("Pause");
    return 0;
}