# include <iostream>
using namespace std;

class C1{
    int A;
};

struct C2{
    int A;
};

int main(){
    C1 c1;
    //c1.A = 10; // This is unvisitable as the variable is private on default

    C2 c2;
    c2.A = 10;// Struct is public on default

    system("Pause");
    return 0;
}