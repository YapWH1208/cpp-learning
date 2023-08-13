# include <iostream>
using namespace std;

int main(){
    int* arr = new int[10];
    for (int i = 0; i < 10; i++){
        arr[i] = i + 100;
    }

    for (int i = 0; i < 10; i++){
        cout << arr[i] << endl;
    }

    // Release the whole array
    delete[] arr;

    system("Pause");
    return 0;
}