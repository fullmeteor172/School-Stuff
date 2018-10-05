#include<iostream.h>
#include<conio.h>
void perf(int num){
int i=0,sum=0;
do{
i=i+1;
if(num%i==0)
sum=sum+i;
}
while(i<num-1);//subtract 1 to prevent it from adding itself to sum.
if(num==sum)
cout<<"The number is Perfect!";
else
cout<<"The number is not perfect!";
getch();
}

void main(){
clrscr();
cout<<"Enter a number: ";
int input;
cin>>input;
perf(input);
}