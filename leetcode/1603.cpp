#include <bits/stdc++.h>
using namespace std;

enum carType
{
    small = 1,
    medium = 2,
    big = 3
};

class ParkingSystem
{
private:
    int smallSlots, mediumSlots, bigSlots;

public:
    ParkingSystem(int small, int medium, int big)
    {
        this->smallSlots = small;
        this->mediumSlots = medium;
        this->bigSlots = big;
    }

    bool addCar(int carType)
    {
        switch (carType)
        {
        case small:
            if (!smallSlots)
            {
                return false;
            }
            smallSlots--;
            break;
        case medium:
            if (!mediumSlots)
            {
                return false;
            }
            mediumSlots--;
            break;
        case big:
            if (!bigSlots)
            {
                return false;
            }
            bigSlots--;
            break;
        default:
            return false;
        }

        return true;
    }
};

int main()
{
    ParkingSystem *obj = new ParkingSystem(1, 1, 0);

    assert(obj->addCar(small));
    assert(obj->addCar(medium));
    assert(!obj->addCar(big));
    assert(!obj->addCar(small));

    delete obj;
}