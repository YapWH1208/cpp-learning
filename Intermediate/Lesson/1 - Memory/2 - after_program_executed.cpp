# include <iostream>
using namespace std;

int * func(){
    int a = 10;
    return &a;
}

int main(){
    int *p = func();

    cout << *p << endl;
    cout << *p << endl;

    system("Pause");
    return 0;
}

/* All data after program executed will be saved in the stack area in the memory.
 * All the data in the stack are saved in a same area.
 * */