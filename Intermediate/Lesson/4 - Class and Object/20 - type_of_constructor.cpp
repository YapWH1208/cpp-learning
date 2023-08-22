# include <iostream>
using namespace std;

class Person{
public:
    Person(){
        cout << "No parameter" << endl;
    }
    Person(int a){
        age = a;
        cout << "One parameter" << endl;
    }
    Person(const Person &p){
        age = p.age;
        cout << "Copying constructor" << endl;
    }
    ~Person(){
        cout << "Destructor" << endl;
    }
public:
    int age;
};

void test01(){
    Person p;
}

void test02(){
    Person p1(10);//2

    Person p2 = Person(10);//2
    Person p3 = Person(p2);//3

    Person p4 = 10;//2 -> Person p4 = Person(10)
    Person p5 = p4;//3 -> Person p4 = Person(p4)
}

int main(){
    //test01();
    test02();

    system("Pause");
    return 0;
}