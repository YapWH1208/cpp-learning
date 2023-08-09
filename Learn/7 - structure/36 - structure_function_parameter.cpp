# include <iostream>
using namespace std;

struct student{
    string name;
    int age;
    int score;
};

void PrintStudent(student stu){
    stu.age = 28;
    cout << "\nName: " << stu.name << "\nAge: " << stu.age << "\nScore: " << stu.score << endl;
}

void PrintStudent2(student *stu){
    stu->age = 28;
    cout << "\nName: " << stu->name << "\nAge: " << stu->age << "\nScore: " << stu->score << endl;
}

int main(){
    student stu = {"Adam", 18, 100};
    PrintStudent(stu);
    cout << "\nName: " << stu.name << "\nAge: " << stu.age << "\nScore: " << stu.score << endl;

    PrintStudent2(&stu);
    cout << "\nName: " << stu.name << "\nAge: " << stu.age << "\nScore: " << stu.score << endl;

    system("Pause");
    return 0;
}