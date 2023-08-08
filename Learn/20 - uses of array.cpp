# include <iostream>
using namespace std;

int main(){
    //1、可以获取整个数组占用内存空间大小
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    cout << "Size of arr: " << sizeof(arr) << endl;
    cout << "Size of first element in arr: " << sizeof(arr[0]) << endl;
    cout << "Number of element in arr: " << sizeof(arr) / sizeof(arr[0]) << endl;

    //2、可以通过数组名获取到数组首地址
    cout << "Address of arr: " << (long long)arr << endl;
    cout << "Address of first element in arr: " << (long long)&arr[0] << endl;
    cout << "Address of second element in arr: " << (long long)&arr[1] << endl;

    system("Pause");
    return 0;
}