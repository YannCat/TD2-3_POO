#include "Point.hpp"

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
	point = "(" + to_string(lepoint.xpos) + "," + to_string(lepoint.ypos) + ")";
	return point;
}

Point additionneur (Point point1, Point point2)
{
	Point resultat;
	resultat.xpos =point1.xpos + point2.xpos;
	resultat.ypos =point1.ypos + point2.ypos;
	return resultat;
}

Point operation (Point lepoint, string c)
{
	if(c=="p++")
		{
		lepoint.xpos++;
		return lepoint;
		}
	else if(c=="++p")
		{ 
		lepoint.ypos++;
		return lepoint;
		}
	else if(c=="p--") 
		{
		lepoint.xpos--;
		return lepoint;
		}
	else if(c=="--p") 
		{
		lepoint.ypos--;
		return lepoint;
		}
	else return lepoint;
}
