# include <iostream>
using namespace std;

void showValue(const int &v){
    //v += 10; // constant cannot be changed
    cout << v << endl;
}

int main(){
    const int &ref = 10;
    // ref = 100 // constant cannot be changed
    cout << ref << endl;

    int a = 10;
    showValue(a);

    system("Pause");
    return 0;
}