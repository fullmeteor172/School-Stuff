#include<iostream.h>
#include<conio.h>
#include<stdlib.h>//for rand() functionality
#include<time.h>//for time to get truly random numbers
// int print=rand();        //Global variable
void maindriver(char x)//function
{
int a;
// cout<<a<<endl; // <<print;
time_t t;//t is a time type variable
int irregularizer=time(&t);//srand() needs a truly variable value which keeps changing
srand(irregularizer);//Assgning srand() a randomizer value
for(int i=0; i<5; i++)//increases randomizer each time it loops
{
a=rand()%10 ;
cout<<a<<endl;
}
}
void main(){
clrscr();//To get things nice and tidy
cout<<"Random Numbers coming right up!"<<endl;
float b=65;//ASCII Value of the char to be printed
maindriver(b);//calls main driver
cout<<endl; // <<print<<endl;
}

