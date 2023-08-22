# include <iostream>
using namespace std;

class Phone{
public:
    Phone(string name){
        phoneName = name;
        cout << "Phone Constructor" << endl;
    }
    ~Phone(){
        cout << "Phone Destructor" << endl;
    }

    string phoneName;
};

class Person{
public:
    Person(string name, string pName): name(name), phone(pName){
        cout <<"Person Constructor"<<endl;
    }
    ~Person(){
        cout << "Person Destructor" << endl;
    }

    void PlayGame(){
        cout << name << " uses " << phone.phoneName << " brand's phone" << endl;
    }

    string name;
    Phone phone;
};

void test01(){
    Person p1("Adam","Huawei");
    p1.PlayGame();
}

int main(){
    test01();

    system("Pause");
    return 0;
}