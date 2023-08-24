# include <iostream>
using namespace std;

class Person{
public:
    Person(){
        a = 0;
    }
    int a;
    static int b;

    void func(){
        cout << "A: " << this->a << endl;
    }
    static void sfunc(){
    }
};

int main(){
    cout << sizeof(Person)<< endl;//4, as static doesn't save in the class memory space

    system("Pause");
    return 0;
}