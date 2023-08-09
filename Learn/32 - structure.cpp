# include <iostream>
using namespace std;

// construct a new data structure
// used to define customize data structure
struct student{
    string name;
    int age;
    int score;
};

int main(){
    // First method
    struct student stu1;
    stu1.name = "Adam";
    stu1.age = 18;
    stu1.score = 99;
    cout << "Name: " << stu1.name << "\nAge: " << stu1.age << "\nScore: " << stu1.score << endl;

    // Second method
    struct student stu2 = {"John",32,57};
    cout << "\nName: " << stu2.name << "\nAge: " << stu2.age << "\nScore: " << stu2.score << endl;


    system("Pause");
    return 0;
}