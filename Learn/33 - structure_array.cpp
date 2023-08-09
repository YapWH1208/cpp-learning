# include <iostream>
using namespace std;

struct student{
    string name;
    int age;
    int score;
};

int main(){
    struct student arr[3]={
            {"Adam", 12, 89},
            {"John", 13, 90},
            {"William", 14, 87}
    };

    int len = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<len ;i++){
        cout << "\nName: " << arr[i].name << "\nAge: " << arr[i].age << "\nScore: " << arr[i].score << endl;
    }

    system("Pause");
    return 0;
}