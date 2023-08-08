# include <iostream>
using namespace std;

int main(){
    int a = 10;
    int *p;

    p = &a;
    cout << "Address of a\t" << &a << endl;
    cout << "Content of pointer\t" << p << endl;

    cout << "Content of content of pointer\t" << *p << endl;

    system("Pause");
    return 0;
}