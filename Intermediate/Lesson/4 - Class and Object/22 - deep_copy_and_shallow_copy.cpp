# include <iostream>
using namespace std;

class Person{
public:
    Person(){
        cout<<"No Param"<<endl;
    }
    Person(int a, int h){
        cout << "Two Param" << endl;
        age = a;
        height = new int(h);
    }
    Person(const Person &p){
        cout << "Copied" << endl;
        age = p.age;
        height = new int(*p.height);
    }
    ~Person(){
        cout << "Deconstructed!" << endl;
        if (height != NULL){
            delete height;
        }
    }
public:
    int age;
    int* height;//memory allocated at stack area
};

void test01(){
    Person p1(18,180);
    Person p2(p1);

    cout << "Age: " << p1.age << "Height: " << *p1.height << endl;
    cout << "Age: " << p2.age << "Height: " << *p2.height << endl;
}

int main(){
    test01();

    system("Pause");
    return 0;
}