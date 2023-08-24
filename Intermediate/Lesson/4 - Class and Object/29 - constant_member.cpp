# include <iostream>
using namespace std;

class Person{
public:
    Person(){
        A = 0;
        B = 0;
    }

    void showPerson() const{
        this->B = 100;// As 'B' is a mutable variable, so it can br changed
    }
    void myFunc() const{
        //A = 10000; // This is a constant param function, so it cannot be changed
    }
public:
    int A;
    mutable int B; //can be change/fix
};

void test01(){
    const Person person;
    cout << person.A << endl;
    cout << person.B << endl;

    //person.A = 100;
    person.B = 1000;

    cout << person.A << endl;
    cout << person.B << endl;
}

int main(){
    test01();

    system("Pause");
    return 0;
}