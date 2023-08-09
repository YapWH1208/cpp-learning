# include <iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int *p = arr;

    cout << "First element: " << arr[0] << endl;
    cout << "First element with pointer: " << *p << endl;

    // Loop to array with pointer
    for(int i = 0; i < 10; i++){
        cout << *p << endl;
        p++;
    }

    system("Pause");
    return 0;
}