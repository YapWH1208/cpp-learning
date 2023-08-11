# include <iostream>
using namespace std;

int main(){
    int arr[5] = {300,350,200,400,250};
    int temp = arr[0];

    for(int i:arr){
        if(i > temp){
            temp=i;
        }
    }
    cout << temp << endl;

    system("Pause");
    return 0;
}