# include <iostream>
using namespace std;

class Person{
public:
    void setName(string name){
        Name = name;
    }
    string getName(){
        return Name;
    }
    int getAge(){
        return Age;
    }
    void setAge(int age){
        if (age < 0 || age > 150){
            cout << "???" << endl;
        }
        Age = age;
    }
    void setLover(string lover){
        Lover = lover;
    }

private:
    string Name;// Writable & Readable
    int Age; // Readable
    string Lover; // Writable
};

int main(){
    Person p1;
    p1.setName("Adam");
    cout << "Name: " << p1.getName() << endl;

    p1.setAge(18);
    cout << "Age: " << p1.getAge() << endl;

    p1.setLover("Janie");

    system("Pause");
    return 0;
}