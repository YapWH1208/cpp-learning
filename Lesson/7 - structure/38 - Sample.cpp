# include <iostream>
# include <ctime>
using namespace std;

struct Student{
    string name;
    int score;
};

struct Teacher{
    string name;
    Student sArray[5];
};

void allocateSpace(Teacher tArray[], int len){
    string tName = "Dave";
    string sName = "Adam";
    string nameSeed = "ABCDE";
    for(int i=0; i<len; i++){
        tArray[i].name = tName + nameSeed[i];
        for(int j=0; j<5; j++){
            tArray[i].sArray[j].name = sName + nameSeed[j];
            tArray[i].sArray[j].score = rand() % 61 + 40;
        }
    }
}

void printTeachers(Teacher tArray[], int len){
    for(int i=0; i<len; i++){
        cout << tArray[i].name << endl;
        for(int j=0; j<5; j++){
            cout << "\nName: " << tArray[i].sArray[j].name << "\nScore: " << tArray[i].sArray[j].score << endl;
        }
    }
}

int main(){
    srand((unsigned int)time(NULL));// Random seed
    Teacher tArray[3];
    int len = sizeof(tArray) / sizeof(Teacher);

    allocateSpace(tArray, len);
    printTeachers(tArray, len);

    system("Pause");
    return 0;
}