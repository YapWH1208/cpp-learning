# include <iostream>
using namespace std;

int main(){
    int a = 10;
    int b = 20;

    // Constant pointer
    // The content of the pointed variable cannot be changed
    const int *p1 = &a;
    cout << p1 << endl;
    cout << *p1 << endl;
    p1 = &b;
    cout << p1 << endl;
    cout << *p1 << endl;
    // E.g. *p1 = 200;

    // Pointer to constant
    // The value of pointer cannot be changed
    int * const p2 = &a;
    *p2 = 100;
    cout << *p2 << endl;
    // E.g. p2 = &b;

    // Double constant
    // Both the value and the content of the pointed variable cannot be changed
    const int * const p3 = &a;

    system("Pause");
    return 0;
}