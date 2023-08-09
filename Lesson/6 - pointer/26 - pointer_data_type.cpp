# include <iostream>
using namespace std;

int main(){
    int a = 10;

    int * p;
    p = &a;

    cout << *p << endl;
    cout << sizeof(p) << endl;
    cout << sizeof(char *) << endl;
    cout << sizeof(float *) << endl;
    cout << sizeof(double *) << endl;

    system("Pause");
    return 0;
}