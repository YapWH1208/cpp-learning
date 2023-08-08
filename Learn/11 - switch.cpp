# include <iostream>
using namespace std;

int main(){
    int score;
    cout << "Please enter the score for the movie(0-10)" << endl;
    cin >> score;

    switch(score){
        case 10:
        case 9:
            cout << "Classic" << endl;
            break;
        case 8:
            cout << "Excellent" << endl;
            break;
        case 7:
        case 6:
            cout << "Good" << endl;
            break;
        default:
            cout << "Rubbish" << endl;
            break;
    }

    system("Pause");
    return 0;
}