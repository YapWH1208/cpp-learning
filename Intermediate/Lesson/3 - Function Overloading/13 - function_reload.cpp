# include <iostream>
using namespace std;

void func(){
    cout << "func 的调用！" << endl;
}

void func(int a){
    cout << "func (int a) 的调用！" << endl;
}

void func(double a){
    cout << "func (double a)的调用！" << endl;
}

void func(int a ,double b){
    cout << "func (int a ,double b) 的调用！" << endl;
}

void func(double a ,int b){
    cout << "func (double a ,int b)的调用！" << endl;
}
// Use the same function name but have different parameter(number of param, types of param or sequence of param)
int main(){
    func();
    func(10);
    func(3.14);
    func(10,3.14);
    func(3.14 , 10);

    system("Pause");
    return 0;
}