# include <iostream>
using namespace std;

int main(){
    char score[10] = {'1','2','3','4','5'};
    for(int i = 0; i < 10;i++){
        cout << score[i] << endl;
    }

    int score2[10] = {2,3,4,5,6,3,3,5,65,67};
    for(int i : score2){
        cout << i << endl;
    }

    system("Pause");
    return 0;
}