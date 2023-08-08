# include <iostream>
using namespace std;

int main() {
    int score;

    cout << "What's your score" << endl;
    cin >> score;

    if (score >= 80) {
        cout << "Yeah! You got an A!" << endl;
    } else if (score >= 70) {
        cout << "Yeah! You got an B!" << endl;
    } else if (score >= 60) {
        cout << "Yeah! You got an C!" << endl;
    } else {
        cout << "NO!YOU FAILED!" << endl;
    }

    system("Pause");
    return 0;
}