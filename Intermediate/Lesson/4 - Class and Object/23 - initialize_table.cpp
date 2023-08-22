# include <iostream>
using namespace std;

class Person{
public:
    Person(int a, int b, int c): A(a), B(b), C(c){}
    void PrintPerson(){
        cout << "A: " << A << endl;
        cout << "B: " << B << endl;
        cout << "C: " << C << endl;
    }
private:
    int A;
    int B;
    int C;
};

int main(){
    Person p(1,2,3);
    p.PrintPerson();

    system("Pause");
    return 0;
}