# include <iostream>
using namespace std;

int main(){
    int arr[9] = {4,2,8,0,5,7,1,3,9};
    int size = sizeof(arr)/sizeof(arr[0])-1;

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size - i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    for(int i:arr){
        cout << i << ",";
    }
    cout << endl;

    system("Pause");
    return 0;
}