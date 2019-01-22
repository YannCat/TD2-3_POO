//#define CATCH_CONFIG_MAIN
//#include "catch.hpp"
#include <string>
#include <iostream>

struct Point
{
	int xpos, ypos;	
};

Point InitPoint(int x, int y);
std::string Display(Point lepoint);
Point additionneur (Point point1, Point point2);
Point operation (Point lepoint);
