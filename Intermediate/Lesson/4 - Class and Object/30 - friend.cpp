# include <iostream>
using namespace std;

class Building{
    // friend is able to use private variable in class
    friend void goodfriend(Building *building);
public:
    Building(){
        this->SittingRoom = "122";
        this->Bedroom = "123";
    }
public:
    string SittingRoom;
private:
    string Bedroom;
};

void goodfriend(Building *building){
    cout << "Visiting " << building->SittingRoom << endl;
    cout << "Visiting " << building->Bedroom << endl;
}

void test01(){
    Building b;
    goodfriend(&b);
}

int main(){
    test01();

    system("Pause");
    return 0;
}