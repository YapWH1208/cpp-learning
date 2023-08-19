# include <iostream>
using namespace std;

class Person{
public:
    string Name;
protected:
    string Car;
private:
    int Password;
public:
    void func(){
        Name = "Adam";
        Car = "Porsche";
        Password = 121212;
    }
};

int main(){
    Person p1;
    p1.Name = "David";
    // Car and Password is unchangeable as one is protected and another is unseen as a private variable

    system("Pause");
    return 0;
}