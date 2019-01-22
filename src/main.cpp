#include "Point.hpp"

int main(int argc, char **argv){
	
	Point monpoint;
	int x , y;
	string c;
	cout<<"Entrez les coordonnées du point A :"<<endl<<"Pour x : ";
	cin>>x;
	cout<<"Pour Y : ";
	cin>>y;
	monpoint = InitPoint(x, y);
	
	string affiche = Display(monpoint);
	cout<<endl<<"Coordonnées du point A : "<<affiche<<endl;
	cout<<"Entrez l'opération à executer :"<<endl<<"p++ : incrémente x de 1"<<endl<<"++p : incrémente y de 1"<<endl<<"p-- : décrémente x de 1"<<endl<<"--p : décrémente x de 1"<<endl;
	cin>>c;
	monpoint = operation (monpoint, c);
	cout<<"Nouvelle coordonnées : "<<Display(monpoint)<<endl;
	return 0;
}
