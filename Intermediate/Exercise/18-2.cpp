# include <iostream>
# include <cmath>
using namespace std;

class Point{
private:
    int x;
    int y;
public:
    Point(int xCoord, int yCoord):x(xCoord),y(yCoord){}

    int getX() const{
        return x;
    }
    int getY() const{
        return y;
    }
};

class Circle{
private:
    Point center;
    int radius;
public:
    Circle(const Point &c, int rad): center(c), radius(rad){}
    int distance(const Point &d) const {
        double distance = sqrt(pow(d.getX() - center.getX(),2) +
                pow(d.getY() - center.getY(),2));
        if(distance < radius){
            cout << "In circle" << endl;
        }else if(distance == radius){
            cout << "On circle" << endl;
        }else{
            cout << "Outside circle" << endl;
        }
    }

};

int main(){
    Point p1(2,3);
    Circle c1(Point(0,0), 5);

    c1.distance(p1);

    system("Pause");
    return 0;
}