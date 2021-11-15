#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float b,x1,x2,a,c,delta;
	double pierw;
	
	cout<<"Obliczanie miejsc zerowych funkcji kwadratowej gdzie a musi byc rozne od 0. \nPodaj a : ";
	cin>>a;
	if(a!=0)
	{
		cout<<"Podaj b : ";
		cin>>b;
		cout<<"Podaj c : ";
		cin>>c;
		delta=(b*b)-(4*a*c);
		cout<<"Delta wynosi: "<<delta;
		pierw=sqrt(delta);
		if(delta>0)
		{
			cout<<endl<<"Pierwiastek z delty wynosi: "<<pierw;
			x1=(-b+pierw)/(2*a);
			x2=(-b-pierw)/(2*a);
			cout<<endl<<"Miejsca zerowe: "<<endl;
			cout<<x1;
			cout<<endl<<x2;
	    }   
	    else if(delta==0)
	    {
		    x1=-b/(a*a);
		    cout<<endl<<"Miejsce zerowe: "<<endl;
		    cout<<x1;
		}
		else
		{
			cout<<endl<<"Brak miejsc zerowych ";
		}
	}else cout<<"Bledne dane, a musi byc rozne od 0.";

	
	return 0;
}
