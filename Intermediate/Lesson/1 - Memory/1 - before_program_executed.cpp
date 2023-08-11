# include <iostream>
using namespace std;

// global variable
int g_a = 10;
int g_b = 20;

// global constant
const int c_g_a = 10;
const int c_g_b = 20;

int main(){
    // local variable
    int l_a = 10;
    int l_b = 20;

    cout << "Address of l_a: " << (long long)&l_a << endl;
    cout << "Address of l_b: " << (long long)&l_b << endl;

    cout << "Address of g_a: " << (long long)&g_a << endl;
    cout << "Address of g_b: " << (long long)&g_b << endl;

    // static variable
    static int s_a = 10;
    static int s_b = 20;

    cout << "Address of s_a: " << (long long)&s_a << endl;
    cout << "Address of s_a: " << (long long)&s_b << endl;

    cout << "Address of string: " << (long long)&"Hello World" << endl;
    cout << "Address of string: " << (long long)&"Hello World !" << endl;

    // local constant
    const int c_l_a = 10;
    const int c_l_b = 20;

    cout << "Address of c_l_a: " << (long long)&c_l_a << endl;
    cout << "Address of c_l_b: " << (long long)&c_l_b << endl;

    system("Pause");
    return 0;
}

/* All local variable and constant are kept in stack area
 * Global variable and static variable are kept in global area
 * Constants are kept in constant area
 */
