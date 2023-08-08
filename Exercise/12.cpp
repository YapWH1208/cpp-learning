# include <iostream>
# include <random>
using namespace std;

int main(){
    int num = rand() % 100;
    int num_guess = 0;
    int guess;
    while (guess != num){
        cout << "\nWhat is the number" << endl;
        cin >> guess;

        if(guess < num){
            cout << "Too small" << endl;
        }else if(guess > num){
            cout << "Too large" << endl;
        }
        num_guess ++;
    }
    cout << "Yeah! Correct!\n" << "Number of guesses: " << num_guess << "\n" << endl;

    system("Pause");
    return 0;
}