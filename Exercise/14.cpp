# include <iostream>
using namespace std;

int main(){
    for(int i = 1; i <= 100; i++){
        if(i % 10 == 7 || i / 10 == 7 || i % 7 == 0){
            cout << i << endl;
        }
    }

    system("Pause");
    return 0;
}