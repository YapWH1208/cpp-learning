# include <iostream>
using namespace std;

void Swap1(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

void Swap2(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void Swap3(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int a = 10;
    int b = 20;

    Swap1(a, b);
    cout << "A: " << a << "B: " << b << endl;

    Swap2(&a, &b);
    cout << "A: " << a << "B: " << b << endl;

    Swap3(a, b);
    cout << "A: " << a << "B: " << b << endl;

    system("Pause");
    return 0;
}