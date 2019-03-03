#include<iostream.h>
#include<conio.h>
#include<math.h>
void root(float a, float b, float d){
	float neg,pos;
	neg=(-b+sqrt(d))/(2*a);//using quadratic formula
	pos=(-b-sqrt(d))/(2*a);
	cout<<endl<<endl<<"The roots are:"<<endl;
	cout<<"Root 1: "<<neg<<endl<<endl<<"Root 2: "<<pos<<endl;
	}
//-------------------------------------------------------------------------//
void main(){
	clrscr();
	float a,b,c,d;
	cout<<"Find the roots of a quadratic equation:"<<endl<<endl;
	cout<<"Format: ax^2 + bx + c"<<endl;
	cout<<"Enter a term: ";
	cin>>a;
	cout<<endl<<"Enter b term: ";
	cin>>b;
	cout<<endl<<"Enter c term: ";
	cin>>c;
	cout<<endl<<endl<<"The quadratic equation is: "<<a<<"x^2 + "<<b<<"x + "<<c<<endl;
	d=(b*b)-(4*a*c);//discriminant
	cout<<endl<<"Discriminant is: "<<d<<endl;
	if(d>0){
		cout<<endl<<"*Roots are real.";
		root(a,b,d);
	       }
	if(d==0){
		cout<<endl<<"*Roots are real and equal";
		root(a,b,d);
		}
	if(d<0)
		cout<<"*Roots are imaginary.";

	cout<<endl<<endl<<"Operations complete! Press any button to exit";
	getch();
	}
