# include "swaps.h"
using namespace std;

void swaps(int a, int b){
    int temp = a;
    a = b;
    b = temp;

    cout << "A = " << a << endl;
    cout << "B = " << b << endl;
}