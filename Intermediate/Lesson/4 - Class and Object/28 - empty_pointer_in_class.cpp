# include <iostream>
using namespace std;

class Person{
public:
    void ShowClassName(){
        cout << "This is class Person" << endl;
    }
    void ShowPerson(){
        if(this == NULL){
            return;
        }
        cout << Age << endl;
    }
public:
    int Age;
};

void test01(){
    Person *p = NULL;
    p->ShowClassName();//Still can use function
    p->ShowPerson();//Includes "this", so cannot use as 'this' is NULL
}

int main(){
    test01();

    system("Pause");
    return 0;
}