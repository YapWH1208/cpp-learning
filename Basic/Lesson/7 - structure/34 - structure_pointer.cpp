# include <iostream>
using namespace std;

struct student{
    string name;
    int age;
    int score;
};

int main(){
    struct student stu = {"John",34,57};
    struct student *p = &stu;

    cout << "Name: " << stu.name << "\nAge: " << stu.age << "\nScore: " << stu.score << endl;

    p->score = 90;
    cout << "\nName: " << stu.name << "\nAge: " << stu.age << "\nScore: " << stu.score << endl;

    system("Pause");
    return 0;
}