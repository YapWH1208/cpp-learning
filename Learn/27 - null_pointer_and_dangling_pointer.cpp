# include <iostream>
using namespace std;

int main(){
    // Null Pointer
    // Pointing nothing
    int *np = NULL;
    cout << *np << endl;

    // Dangling Pointer
    // Pointing invalid memory space
    // E.g. memory that is being released/ memory that is being rewritten or occupied
    int *dp = (int *)0x1100;
    cout << *dp << endl;

    system("Pause");
    return 0;
}