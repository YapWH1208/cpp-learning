# include <iostream>
using namespace std;

void swap_value(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

void swap_address(int *p1, int *p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

// Swapping the value without redefining a new variable cannot change the original value
// But changing the address will change the value of the original variable
int main(){
    int a = 10;
    int b = 20;
    swap_value(a,b);

    cout << "A = " << a << endl;
    cout << "B = " << b << endl;
    cout << "Address of A: " << &a << endl;
    cout << "Address of B: " << &b << endl;
    swap_address(&a,&b);

    cout << "A = " << a << endl;
    cout << "B = " << b << endl;
    cout << "Address of A: " << &a << endl;
    cout << "Address of B: " << &b << endl;

    system("Pause");
    return 0;
}