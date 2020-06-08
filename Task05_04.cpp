#include <string>
#include <iostream>
#include <string>
using namespace std;

class Plant
{
    string area;

protected:
    void plant(string name)
    {
        cout << "The" << " " << name << " " << "was planted." << "\n";
    }

public:
    void setArea(string area)
    {
        this->area = area;
    }

    string getArea()
    {
        return this->area;
    }
};

class flower : public Plant     // цветковые
{
    string flowerSize;
    string seeds;

public:
    void setFlowerSize(string flowerSize)
    {
        this->flowerSize = flowerSize;
    }

    void setSeeds(string seeds)
    {
        this->seeds = seeds;
    }

    string getFlowerSize()
    {
        return this->flowerSize;
    }

    string getSeeds()
    {
        return this->seeds;
    }

    void water() 
    {
        cout << "The flower was watered." << "\n";
    }

    void plantFlower()
    {
        plant("flower");
    }
};

class moss : public Plant     // мохообразные
{
    string usefulProperties;

public:
    void setUsefulProperties(string usefulProperties)
    {
        this->usefulProperties = usefulProperties;
    }

    string getUsefulProperties()
    {
        return this->usefulProperties;
    }

    void findNorth()
    {
        cout << "Mosses grow on the nothern side." << "\n";
    }

    void plantMoss()
    {
        plant("moss");
    }
};

class fern : public Plant     // папоротниковидные
{
    string stemsNumber;
    
public:
    void setStemsNumber(string stemsNumber)
    {
        this->stemsNumber = stemsNumber;
    }

    string getStemsNumber()
    {
        return this->stemsNumber;
    }

    void plantFern()
    {
        plant("fern");
    }
};

int main()
{
    flower rose;
    rose.setArea("warm");
    rose.setFlowerSize("5");
    rose.setSeeds("10");
    cout << "Rose area: " << rose.getArea() << " " << "Rose flower size: " << rose.getFlowerSize() << "\n";
    rose.water();
    rose.plantFlower();
    moss sfagnum;
    sfagnum.setArea("wet");
    sfagnum.setUsefulProperties("can keep radioactive substancies");
    cout << "Sfagnum area: " << sfagnum.getArea() << " " << "Sfagnum useful properties: " << sfagnum.getUsefulProperties() << "\n";
    sfagnum.findNorth();
    sfagnum.plantMoss();
    fern orlyak;
    orlyak.setArea("forest");
    orlyak.setStemsNumber("9");
    cout << "Orlyak area: " << orlyak.getArea() << " " << "Orlyak stems number: " << orlyak.getStemsNumber() << "\n";
    orlyak.plantFern();
}