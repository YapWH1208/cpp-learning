# include <iostream>
using namespace std;

class Person{
public:
    Person(){ // Used when constructing the class
        cout << "Using Constructor Person" << endl;
    }
    ~Person(){ // Used when destructing class
        cout << "Using Destructor Person" << endl;
    }
};

void test01(){
    Person p;
}

int main(){
    test01();

    system("Pause");
    return 0;
}