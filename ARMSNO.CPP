#include<conio.h>
#include<iostream.h>
void armstrong(int n)
{
int i,sum=0,copy=n;
while(n!=0){
i=n%10;
sum=sum+i*i*i;
n=(n-i)/10;
}
if(copy==sum)
cout<<"It is an armstrong";
else
cout<<"It is not an armstrong";
getch();
}

void main(){
clrscr();
int input;
cout<<"Enter a number: ";
cin>>input;
armstrong(input);
}
