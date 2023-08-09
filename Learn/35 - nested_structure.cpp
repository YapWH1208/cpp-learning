# include <iostream>
using namespace std;

struct student{
    string name;
    int age;
    int score;
};

struct teacher{
    int id;
    string name;
    int age;
    struct student stu;
};

int main(){
    struct teacher t1 = {10000,"Wong",40,"Adam",16,90};

    cout << "ID: " << t1.id << "\nName: " << t1.name << "\nAge: " << t1.age << endl;
    cout << "\nStudent's name: " << t1.stu.name << "\nStudent's age: " << t1.stu.age << "\nStudent's score: " << t1.stu.score << endl;

    system("Pause");
    return 0;
}