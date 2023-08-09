# include <iostream>
using namespace std;

struct student{
    string name;
    int age;
    int score;
};

void PrintStudent(const student *stu){
    // the values cannot be changed
    // stu->age = 100;
    cout << "Name: " << stu->name << "Age: " << stu->age << "Score: " << stu->score <<endl;
}

int main(){
    student stu = {"Adam", 23, 90};
    PrintStudent(&stu);

    system("Pause");
    return 0;
}