# include <iostream>
using namespace std;

int * func(){
    // create a new area to save the new variable in the memory
    int *a = new int(10);
    return a;
}

int main(){
    int *p = func();
    cout << *p << endl;
    cout << *p << endl;

    // release the memory in the stack area
    delete p;

    // This will have error as the memory is released
    //cout << *p << endl;

    system("Pause");
    return 0;
}