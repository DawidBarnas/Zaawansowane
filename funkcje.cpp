#include <iostream>
#include <math.h>
#include <cstdlib>
#include <conio.h>
#include<math.h>

using namespace std;

int main()
{

	float b,x1,x2,a,c,delta,y,p,q;
	double pierw;
	
    int wybor = 0;


    cout<<"**MENU**\n";
    cout<<"1.Funkcja liniowa\n";
    cout<<"2.Funkcja kwadratowa\n";
    cout<<"3.Postac kanoniczna funkcji kwadratowej\n";
    cout<<"4.Postac iloczynowa funkcji kwadratowej\n";

    cout<<"Wybierz:";
    wybor=getch();
    cout<<"\n\n";

    switch ( wybor ) 
    {
        case '1':
            cout<<"Podaj b : ";
	cin>>b;
	cout<<"Podaj c : ";
	cin>>c;
	if (b != 0)
	if (b == 0 && c == 0)
	{
		cout<<"Funkcja ma nieskonczenie wiele miejsc zerowych.";
	}else if (b == 0 && c != 0)
	{
		cout<<"Funkcja nie ma miejsc zerowych.";
	}else
	{
	y=((-c)/b);

	cout<<"\nMiejsce zerowe wynosi : "<<y;
	}
	else 
	{
		cout<<"Niewlasciwe dane, a musi byc rozne od 0";	
	}
                break;
        case '2':
            
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
	}
	else
	{
	cout<<"Podaj b : ";
	cin>>b;
	cout<<"Podaj c : ";
	cin>>c;
	if (b != 0)
	if (b == 0 && c == 0)
	{
		cout<<"Funkcja ma nieskonczenie wiele miejsc zerowych.";
	}else if (b == 0 && c != 0)
	{
		cout<<"Funkcja nie ma miejsc zerowych.";
	}else
	{
	y=((-c)/b);

	cout<<"\nMiejsce zerowe wynosi : "<<y;
	}
	else 
	{
		cout<<"Niewlasciwe dane, a musi byc rozne od 0";	
	}

    }

	
	return 0;

               
            break;
            
        case '3':
        	cout<<"Obliczanie funkcji kwadratowej w postaci kanonicznej. /nPodaj a : ";
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
		 p=-(b)/(2*a);
		 q=-(delta)/(4*a);
		 cout<<endl<<"p wynosi: "<<p;
		 cout<<endl<<"q wynosi: "<<q;
			
	    }   
	    else if(delta==0)
	    {
		 p=-(b)/(2*a);
		 q=-(delta)/(4*a);
		 cout<<endl<<"p wynosi: "<<p;
		 cout<<endl<<"q wynosi: "<<q;
		}
		else
		{
		p=-(b)/(2*a);
		 q=-(delta)/(4*a);
		 cout<<endl<<"p wynosi: "<<p;
		 cout<<endl<<"q wynosi: "<<q;;
		}
	}
	else
	{
	cout<<"Podaj b : ";
	cin>>b;
	cout<<"Podaj c : ";
	cin>>c;
	if (b != 0)
	if (b == 0 && c == 0)
	{
		cout<<"Funkcja ma nieskonczenie wiele miejsc zerowych.";
	}else if (b == 0 && c != 0)
	{
		cout<<"Funkcja nie ma miejsc zerowych.";
	}else
	{
	y=((-c)/b);

	cout<<"\nMiejsce zerowe wynosi : "<<y;
	}
	else 
	{
		cout<<"Niewlasciwe dane, a musi byc rozne od 0";	
	}

    }
	return 0;
	
	break;
	
	case '4':
		cout<<"Obliczanie funkcji kwadratowej w postaci iloczynowej. /nPodaj a : ";
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
	}
	else
	{
	cout<<"Podaj b : ";
	cin>>b;
	cout<<"Podaj c : ";
	cin>>c;
	if (b != 0)
	if (b == 0 && c == 0)
	{
		cout<<"Funkcja ma nieskonczenie wiele miejsc zerowych.";
	}else if (b == 0 && c != 0)
	{
		cout<<"Funkcja nie ma miejsc zerowych.";
	}else
	{
	y=((-c)/b);

	cout<<"\nMiejsce zerowe wynosi : "<<y;
	}
	else 
	{
		cout<<"Niewlasciwe dane, a musi byc rozne od 0";	
	}

    }
    
    
    
return 0;
    }
    




}


