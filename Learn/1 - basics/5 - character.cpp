# include <iostream>
using namespace std;

int main(){
    // Character
    // Uses only 1 byte, but only one character(Saved as ASCII code)
    // Only ''
    char char1 = 'A';
    cout << "Char 1 is " << char1 << endl;
    cout << "Char 1 is " << (int)char1 << endl;// Convert the character to ASCII
    cout << "\n" << endl;

    system("Pause");
    return 0;
}