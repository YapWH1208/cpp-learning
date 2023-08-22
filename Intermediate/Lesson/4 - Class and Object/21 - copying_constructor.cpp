# include <iostream>
using namespace std;

class Person{
public:
    Person(){//1
        cout << "No param" << endl;
        age = 0;
    }
    Person(int a){//2
        cout << "One param" << endl;
        age = a;
    }
    Person(const Person &p){//3
        cout << "Copying constructor" << endl;
        age = p.age;
    }
    ~Person(){
        cout << "Deconstructed!" << endl;
    }
public:
    int age;
};

void test01(){
    Person man(100);//2
    Person newman(man);//3
    Person newman2 = man;// Copying with using constructor
}


void DoWork(Person p){}
void test02(){
    Person p;//1
    DoWork(p);//3
}


Person DoWork2(){
    Person p1;//1
    cout << (int *)&p1 <<endl;
    return p1;
}
void test03(){
    Person p = DoWork2();
    cout << (int *)&p <<endl;
}

int main(){
    //test01();
    test02();
    //test03();

    system("Pause");
    return 0;
}