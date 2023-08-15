# include <iostream>
using namespace std;

// Return local variable's cite
int &test1(){
    int a = 10;
    return a;
}

// Return static variable's cite
int &test2(){
    static int a = 20;
    return a;
}

int main(){
    // Cannot return local variable's reference
    int &ref = test1();
    cout << "ref = " << ref << endl;
    cout << "ref = " << ref << endl;

    // If function is on the right side, the return value must be the reference
    int &ref2 = test2();
    cout << "ref2 = " << ref2 << endl;
    cout << "ref2 = " << ref2 << endl;

    test2() = 1000;
    cout << "ref2 = " << ref2 << endl;
    cout << "ref2 = " << ref2 << endl;

    system("Pause");
    return 0;
}