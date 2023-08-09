# include <iostream>
using namespace std;

void bubbleSort(int * arr, int len){
    for (int i = 0; i < len - 1; i++){
        for (int j = 0; j < len - 1 - i; j++){
            if (arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void print_array(int arr[], int len){
    for(int i = 0; i < len; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[10] = {3,4,65,64,7,668,568,123,5,25};
    int len = sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr, len);
    print_array(arr,len);

    system("Pause");
    return 0;
}