#include<iostream.h>
#include<conio.h>
void HCF(int n1,int n2){
int f,forever=0;
if(n1>n2){
f=n2;
do{
if(n1%f==0&&n2%f==0){
goto end;
}
f=f-1;
}while(forever!=1);}
if(n2>n1){
f=n1;
do{
if(n1%f==0&&n2%f==0){
goto end;
}
f=f-1;
}while(forever!=1);}
end:
cout<<endl<<"The HCF of the two numbers is: "<<f;
if(f==1)
cout<<endl<<"The numbers are co-prime.";
getch();
}
void main(){
clrscr();
int a,b;
cout<<"Enter the First number: ";
cin>>a;
cout<<endl<<"Enter the Second number: ";
cin>>b;
HCF(a,b);
}