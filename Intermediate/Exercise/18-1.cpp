# include <iostream>
using namespace std;

class Cube{
public:
    int length;

    int area(){
        return length*length*6;
    }
    int volume(){
        return length*length*length;
    }
};

int main(){
    Cube c1;
    c1.length = 6;

    cout << "Area: " << c1.area() << endl;
    cout << "Volume: " << c1.volume() << endl;

    system("Pause");
    return 0;
}