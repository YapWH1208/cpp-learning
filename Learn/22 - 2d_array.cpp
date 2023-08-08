# include <iostream>
using namespace std;

int main(){
    int arr[10][10];
    int num_row = sizeof(arr) / sizeof(arr[0]);
    int num_col = sizeof(arr[0])/sizeof(arr[0][0]);

    for(int i = 0; i < (num_row - 1); i++){
        for(int j = 0; j < (num_col-1); j++){
            arr[i][j] = i+j;
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    system("Pause");
    return 0;
}