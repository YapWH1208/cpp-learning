# include <iostream>
# define day 7
using namespace std;

int main(){
    int VarA = 123;
    const int VarB = 456;

    // Variable and changing variable
    cout << VarA << " is the value of VarA" << endl;
    VarA = 789;
    cout << VarA << " is the value of VarA" << endl;
    cout << "\n" << endl;

    // Constant variable
    cout << "VarB = " << VarB << endl;
    cout << "\n" << endl;

    // Predefined constant variable
    cout << "There is " << day << "days in a week" << endl;
    cout << "\n" << endl;

    system("Pause");
    return 0;
}