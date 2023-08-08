# include <iostream>
using namespace std;

int main(){
    // Memory usage of different int type (in Bytes)
    // Type(Max number): short(16), int~=long(32), long long(64)
    // Type(Max Bytes): short(2), int~=long(4), long long(8)
    short num1 = 10;
    int num2 = 10;
    long num3 = 10;
    long long num4 = 10;
    cout << "short: " << sizeof(num1) << endl;
    cout << "int: " << sizeof(num2) << endl;
    cout << "long: " << sizeof(num3) << endl;
    cout << "long long: " << sizeof(num4) << endl;
    cout << "\n" << endl;

    system("Pause");
    return 0;
}