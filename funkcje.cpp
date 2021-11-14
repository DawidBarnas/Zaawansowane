#include <iostream>

using namespace std;

int main()
{
	float b,x,a=0;
	
	cout<<"Obliczanie miejsc zerowych funkcji liniowej. \nPodaj a : ";
	cin>>a;
	cout<<"Podaj b : ";
	cin>>b;
	if (a == 0 && b == 0)
	{
		cout<<"Funkcja ma nieskonczenie wiele miejsc zerowych.";
	}else if (a == 0 && b != 0)
	{
		cout<<"Funkcja nie ma miejsc zerowych.";
	}else
	{
	x=((-b)/a);
	cout<<"\nMiejsce zerowe wynosi : "<<x;
	}
	
	
	return 0;
	//dsdsadsadas
}
