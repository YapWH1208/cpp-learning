# include <iostream>
using namespace std;

void func(int &a){
    cout << "func (int &a) 调用 " << endl;
}

void func(const int &a){
    cout << "func (const int &a) 调用 " << endl;
}

void func2(int a, int b = 10){
    cout << "func2(int a, int b = 10) 调用" << endl;
}

void func2(int a){
    cout << "func2(int a) 调用" << endl;
}

int main(){
    int a = 10;
    func(a);// function without const
    func(10);// function with const

    //func2(10) // Cannot be use as parameter cannot be recognized well, need to prevent this situation

    system("Pause");
    return 0;
}