#include <iostream>

using namespace std;

int main()
{
	float b,x,a=0;
	
	cout<<"Obliczanie miejsc zerowych funkcji liniowej gdzie a musi byæ rozne od 0. \nPodaj a : ";
	cin>>a;
	cout<<"Podaj b : ";
	cin>>b;
	if (a != 0)
	{
	x=((-b)/a);
	
	cout<<"\nMiejsce zerowe wynosi : "<<x;
	}
	else 
	{
		cout<<"Niewlasciwe dane, a musi byc rozne od 0";	
	}
	
	return 0;
}
