#include "Point.hpp"

int main(int argc, char **argv){
	
	Point A, B, D;
	int x , y;
	string c;
	cout<<"Entrez les coordonnées du point A :"<<endl<<"Pour x : ";
	cin>>x;
	cout<<"Pour Y : ";
	cin>>y;
	A = InitPoint(x, y);
	string affiche = Display(A);
	cout<<endl<<"Coordonnées du point A : "<<affiche<<endl<<endl;
	
	cout<<"Entrez les coordonnées du point B :"<<endl<<"Pour x : ";
	cin>>x;
	cout<<"Pour Y : ";
	cin>>y;
	B = InitPoint(x, y);
	affiche = Display(B);
	cout<<endl<<"Coordonnées du point B : "<<affiche<<endl<<endl;
		
	D = additionneur(A,B);
	cout<<"L'addition de ces 2 points retourne : "<<Display(D)<<endl<<endl;
	
	cout<<"Entrez l'opération à executer :"<<endl<<"p++ : incrémente x de 1"<<endl<<"++p : incrémente y de 1"<<endl<<"p-- : décrémente x de 1"<<endl<<"--p : décrémente x de 1"<<endl;
	cin>>c;
	A = operation (A, c);
	cout<<"Nouvelle coordonnées : "<<Display(A)<<endl;
	return 0;
}
