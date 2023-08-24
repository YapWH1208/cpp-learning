# include <iostream>
using namespace std;

class Person{
public:
    Person(int age){
        // "this" is used for differentiate the variable with the same name
        this->age = age;
    }
    Person& PersonAddPerson(Person p){
        this->age += p.age;
        // Here return the class itself
        return *this;
    }
    int age;
};

int main(){
    Person p1(10);
    cout << "p1.age : " << p1.age << endl;

    Person p2(10);
    p2.PersonAddPerson(p1).PersonAddPerson(p1).PersonAddPerson(p1);
    cout << "p2.age : " << p2.age << endl;

    system("Pause");
    return 0;
}