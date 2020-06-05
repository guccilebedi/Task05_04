#include <string>
#include <iostream>
#include <string>
using namespace std;

class Plant
{
public:
    string area;
};

class flower : public Plant     // цветковые
{
public:
    string flowerSize;
    string seeds;
};

class moss : public Plant     // мохообразные
{
public:
    string usefulProperties;
};

class fern : public Plant     // папоротниковидные
{
public:
    string stemsNumber;
};

int main()
{
    flower rose;
    rose.area = "warm";
    rose.flowerSize = "5";
    rose.seeds = "";
    cout << "Rose area: " << rose.area << " " << "Rose flower size: " << rose.flowerSize << "\n";
    moss sfagnum;
    sfagnum.area = "wet";
    sfagnum.usefulProperties = "can keep radioactive substancies";
    cout << "Sfagnum area: " << sfagnum.area << " " << "Sfagnum useful properties: " << sfagnum.usefulProperties << "\n";
    fern orlyak;
    orlyak.area = "forest";
    orlyak.stemsNumber = "9";
    cout << "Orlyak area: " << orlyak.area << " " << "Orlyak stems number: " << orlyak.stemsNumber << "\n";
}