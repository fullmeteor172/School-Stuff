#include<iostream.h>
#include<conio.h>
void prime(int num){
int i=1,loopterminator=0;//I didn't need to, I know...
do{
i=i+1;
if((num%i)==0){
if(i==num)
goto end;
cout<<"The number is composite...";
loopterminator=1;}
else if(i==32766)//32767 is the range of 'int'
{
end:
cout<<"The numer is prime!";
loopterminator=1;}
}while(loopterminator!=1);//Hasta la vista, baby
getch();

}

void main(){
clrscr();
cout<<"Enter a number: ";
int input;
cin>>input;
prime(input);
}
