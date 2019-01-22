#include "Point.hpp"

using namespace std;

int main(int argc, char **argv){
	
	Point monpoint = InitPoint(1, 2);
	
	monpoint = operation(monpoint);
	string affiche = Display(monpoint);
	cout<<affiche<<endl;
	return 0;
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

Point additionneur (Point point1, Point point2)
{
	Point resultat;
	resultat.xpos =point1.xpos + point2.xpos;
	resultat.ypos =point1.ypos + point2.ypos;
	return resultat;
}

Point operation ( Point lepoint)
{
	string c;	
	cout<<"Entrez l'opération à executer :"<<endl<<"p++ : incrémente x de 1"<<endl<<"++p : incrémente y de 1"<<endl<<"p-- : décrémente x de 1"<<endl<<"--p : décrémente x de 1"<<endl;
	cin>>c;
	
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
