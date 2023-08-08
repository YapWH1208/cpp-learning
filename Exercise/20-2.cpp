# include <iostream>
using namespace std;

int main(){
    int arr[5]={1,3,2,5,4};
    int start = 0;
    int end = sizeof(arr)/sizeof(arr[0]) - 1;

    for(int i = 1; i < end/2; i++){
        swap(arr[start], arr[end]);
        start += 1;
        end -= 1;
    }

    for(int i:arr){
        cout<<i<<",";
    }
    cout<<endl;
    system("Pause");
    return 0;
}