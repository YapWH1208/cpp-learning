# include <iostream>
using namespace std;

class Person{
public:
    static int A;
private:
    static int B;
};

int Person::A = 10;
int Person::B = 20;

void test01(){
    Person p1;
    p1.A = 100;
    cout << "p1.A = " << p1.A << endl;

    Person p2;
    p2.A = 200;
    cout << "p2.A = " << p2.A << endl;

    cout << "A = " << Person::A << endl;
    // All static member shares the same memory space
    // e.l.  the value of all the static variable will be the same
}

int main(){
    test01();

    system("Pause");
    return 0;
}