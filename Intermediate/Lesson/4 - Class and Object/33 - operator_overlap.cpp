# include <iostream>
using namespace std;

class Person{
public:
    Person(){};
    Person(int a, int b){
        this->A = a;
        this->B = b;
    }
    Person operator+(const Person &p){
        Person temp;
        temp.A = this->A + p.A;
        temp.B = this->B + p.B;
        return temp;
    }

public:
    int A;
    int B;
};

Person operator+(const Person &p2, int val){
    Person temp;
    temp.A = p2.A + val;
    temp.B = p2.B + val;
    return temp;
}

void test(){
    Person p1(10,20);
    Person p2(20,20);

    Person p3 = p2 + p1;
    cout << "A: " << p3.A << "\nB: " << p3.B << endl;

    Person p4 = p3 + 10;
    cout << "\nA: " << p4.A << "\nB: " << p4.B << endl;
}

int main(){
    test();

    system("Pause");
    return 0;
}