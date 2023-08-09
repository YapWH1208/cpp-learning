# include <iostream>
using namespace std;

struct hero{
    string name;
    int age;
    string sex;
};

void bubbleSort(hero arr[] , int len){
    for (int i = 0; i < len - 1; i++){
        for (int j = 0; j < len - 1 - i; j++){
            if (arr[j].age > arr[j + 1].age){
                hero temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printHeros(hero arr[], int len){
    for (int i = 0; i < len; i++){
        cout << "\nName: " << arr[i].name << "\nSex: " << arr[i].sex << "\nAge: " << arr[i].age << endl;
    }
}

int main(){
    struct hero arr[5]={
            {"Adam",23,"Male"},
            {"Beckham",22,"Male"},
            {"Charlie",20,"Male"},
            {"David", 21,"Male"},
            {"Jenny", 19, "Female"}
    };
    int len = sizeof(arr)/sizeof(hero);

    bubbleSort(arr, len);
    printHeros(arr, len);

    system("Pause");
    return 0;
}