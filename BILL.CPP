/* Phone Bill:
First 100:Rs.0.5
Second 100:Rs.0.45
Third 100:Rs.0.35
After 300 calls service is free
Base Fare: Rs.100 */

#include<iostream.h>
#include<conio.h>
void main(){
	float n,bill=0;
	clrscr();
	cout<<"Calculate your phone bill:";
	cout<<endl<<endl<<"Enter the number of calls made: ";
	cin>>n;
	//calculating bill amount:
	if(n>=0&&n<100){
		bill=100+n*0.5;
		}
	if(n>=100&&n<200){
		bill=150+(n-100)*0.45;
		}
	if(n>=200&&n<300){
		bill=195+(n-200)*0.45;
		}
	if(n>=300){
		bill=230+(n-300)*0.45;
		}
	cout<<endl<<"The Phone bill is Rs. "<<bill;
	cout<<endl<<endl<<"Press any button to exit. ";
	getch();
	}
