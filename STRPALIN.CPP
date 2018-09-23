#include<iostream.h>
#include<conio.h>
#include<string.h>
void palin(char str[20]){//RACECAR is a palindrome example.
int len=strlen(str)-1,i,test=0;
cout<<"The Actual string lenght is: "<<strlen(str)<<endl;
cout<<"The (reduced) String length is: "<<len<<endl;
int lenc=len;
for(i=0;i<strlen(str);i++){
if(str[i]==str[len]){//code to check if extremeends are equal
cout<<"true:  "<<str[i]<<" "<<str[len]<<" "<<len<<" "<<i<<endl;
test=test+1;//Add one to bring left extreme one step closer to centre
len=len-1;//Sub 1 to bring right extreme closer by one
}
else{
cout<<"False: "<<str[i]<<" "<<str[len]<<" "<<len<<" "<<i<<endl;
len=len-1;
}
}
cout<<endl<<"The Test results are: "<<test<<endl;
if(test==strlen(str)){//final testing
cout<<"The enterted string "<<str<<" is a palindrome.";}
else
cout<<endl<<"The entered string "<<str<<" is not a palindrome.";

getch();
}
void main(){
clrscr();//to get things nice and tidy
cout<<"Enter a string: ";
char input[20];
cin>>input;
cout<<endl;
palin(input);//feeding palin nom nom
}
