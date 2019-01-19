#include <iostream>
#include <string>
#include "Point.hpp"

using namespace std;

int main(int argc, char **argv){
	
}

Point InitPoint(int x, int y)
{
	Point monPoint;

	monPoint.xpos = x;
	monPoint.ypos = y;
	
	return monPoint;
}
	
std::string Display(Point lepoint)
{
	string point;
	point = "(" + to_string(lepoint.xpos) + ", " + to_string(lepoint.ypos) + ")";
	return point;
}

