#include<conio.h>
#include<iostream.h>
void LCM(int n1,int n2){
int a,b,test=0;
a=n2;
b=n1;
if(n1==n2){
cout<<"The LCM is: "<<n1;
goto end;}

if(n1>n2){
while(test!=1){
while(n2%n1!=0){
same:
n2=n2+1;}
test=1;}
if(n2%a!=0)
goto same;
cout<<"The LCM is: "<<n2;}
else{
while(test!=1){
while(n1%n2!=0){
rep:
n1=n1+1;}
test=1;}
if(n1%b!=0)
goto rep;
cout<<"The LCM is: "<<n1;}
end:
getch();

}

void main(){
clrscr();
int a,b;
cout<<"Enter a number: ";
cin>>a;
cout<<endl<<"Enter a second number: ";
cin>>b;
cout<<endl;
LCM(a,b);
}