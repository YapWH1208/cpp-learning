# include <iostream>
using namespace std;

int func(int a, int b=10, int c=10){
    return a+b+c;
}

int main(){
    cout << "Ret = " << func(20,20) << endl;
    cout << "Ret = " << func(100) << endl;

    system("Pause");
    return 0;
}