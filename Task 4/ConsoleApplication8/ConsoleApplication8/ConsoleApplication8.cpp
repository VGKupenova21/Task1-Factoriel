#include <iostream>
using namespace std;

class Point
{
private:
	int pointX, pointY, pointZ;

public:
	Point(int pointX1 = 0, int pointY1 = 0, int pointZ1 = 0)
	{
		pointX = pointX1;
		pointY = pointY1;
		pointZ = pointZ1;
	}

	Point(Point& pointer)
	{
		pointX = pointer.pointX;
		pointY = pointer.pointY;
		pointZ = pointer.pointZ;
	}

	int getX()
    { 
        return pointX;  
    }

    int getY()
    {
        return pointY;
    }

    int getZ()
    {
        return pointZ;
    }
};

int main()
{
    Point point(1, 2, 3);

    cout << "Coordinates: (" << point.getX() << ", " << point.getY() << ", " << point.getZ() << ")" << std::endl;
}