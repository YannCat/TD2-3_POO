#include <string>
#include <iostream>

using namespace std;


struct Point
{
	int xpos, ypos;	
};

Point InitPoint(int x, int y);
std::string Display(Point lepoint);
Point additionneur (Point point1, Point point2);
Point operation (Point lepoint, string c);


