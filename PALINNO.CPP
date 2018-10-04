#include<conio.h>
#include<iostream.h>
void palin(int num){
int rev=0,r=2,digit,a=num;
do{
digit=a%10;//finding ones place
rev=(rev*10)+ digit;//Adding each digit in sucession
a=(a-digit)/10;//removing the ones place
}
while(a!=0);
if(num==rev)
cout<<"Your number is a Palindrome";
else
cout<<"The number is not a Palindrome";
getch();
}

void main(){
clrscr();
int input;
cout<<"Enter a number: ";
cin>>input;
palin(input);
}