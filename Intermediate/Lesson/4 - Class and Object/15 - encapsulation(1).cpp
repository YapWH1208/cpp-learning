# include <iostream>
using namespace std;

const double pi = 3.14;

class Circle{
public:
    int radius;
    double calculate_circumference(){
        return 2*pi*radius;
    }
};

int main(){
    Circle c1;
    c1.radius = 10;

    cout << "Perimeter of C1: " << c1.calculate_circumference() << endl;

    system("Pause");
    return 0;
}