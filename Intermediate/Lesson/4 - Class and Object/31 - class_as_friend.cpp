# include <iostream>
using namespace std;

class Building;

class GoodFriend{
public:
    GoodFriend();
    void visit();
private:
    Building *building;
};

class Building{
    friend class GoodFriend;
public:
    Building();
public:
    string SittingRoom;
private:
    string BedRoom;
};

Building::Building() {
    this -> SittingRoom = "123";
    this -> BedRoom = "10086";
}

GoodFriend::GoodFriend() {
    building = new Building;
}

void GoodFriend::visit() {
    cout << "Visiting " << building->SittingRoom << endl;
    cout << "Visiting " << building->BedRoom << endl;
}

void test01(){
    GoodFriend gg;
    gg.visit();
}

int main(){
    test01();

    system("pause");
    return 0;
}