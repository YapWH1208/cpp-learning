# include <iostream>
using namespace std;

class Building;
class GoodFriend{
public:
    GoodFriend();
    void visit();
    void visit2();
private:
    Building *building;
};

class Building{
    friend void GoodFriend::visit();
public:
    Building();
public:
    string SittingRoom;
private:
    string BedRoom;
};

Building::Building() {
    this -> SittingRoom = "123123";
    this -> BedRoom = "7897";
}

GoodFriend::GoodFriend(){
    building = new Building;
}

void GoodFriend::visit() {
    cout << "Visiting " << building->SittingRoom << endl;
    cout << "Visiting " << building->BedRoom << endl;
}

void GoodFriend::visit2() {
    cout << "Visiting " << building->SittingRoom << endl;
}

void test01(){
    GoodFriend gg;
    gg.visit2();
}


int main(){
    test01();

    system("Pause");
    return 0;
}