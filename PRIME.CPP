#include<iostream.h>
#include<conio.h>
void prime(int num){
int i=1,loopterminator=0;//I didn't need to i know...
loop:
do{
++i;
if(num%i==0){
if(i==num)
goto loop;
cout<<"The number is composite...";
loopterminator=1;}
else if(i=32766)//32767 is the range of 'int'
{
cout<<"The numer is prime!";
loopterminator=1;}
}while(loopterminator!=1);//Hastal vista baby
getch();

}

void main(){
clrscr();
cout<<"Enter a number: ";
int input;
cin>>input;
prime(input);
}
