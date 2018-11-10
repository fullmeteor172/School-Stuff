#include<iostream.h>
#include<conio.h>
void array(const int i){
int a[i];//assigning const int to the array
cin>>a[0];
cout<<endl<<a[0];//To test output
getch();
}
void main(){
clrscr();
int n=0;
cout<<"Enter array range: ";
cin>>n;
array(n);//Calling the array function and sending n to it.
}