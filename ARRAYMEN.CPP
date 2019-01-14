#include<iostream.h>
#include<conio.h>
#include<dos.h>
void inser(int a[10]){
	clrscr();
	char input;
	int temp=0;
	textcolor(10);
	cprintf("Insertion Sort:-");
	textcolor(19);
	cout<<endl;
	cout<<endl<<"----Processing Request----";

	}
//---------------------------------------------------------------------//
void sel(int a[10]){
	int b[10];
	for(int l=0;l<10;l++){
	b[l]=0;}
	clrscr();
	a[10]=32767;
	char input;
	int s=32767,loc=0;
	textcolor(10);
	cprintf("Selection Sort:-");
	textcolor(19);
	cout<<endl;
	cout<<endl<<"----Processing Request----";
	for(int i=0;i<10;i++){
	s=32767;
	for(int j=0;j<10;j++){
		if(a[j]<a[j+1]&&a[j]<s){
		s=a[j];
		loc=j;}}
		b[i]=s;
		a[loc]=32767;
		}
	for(int k=0;k<10;k++){
	a[k]=b[k];}
	a[10]=0;
	cout<<endl<<"Done!, Returning to previous menu";
	delay(1500);

}

//----------------------------------------------------------------------//
void bubble(int a[10]){
	clrscr();
	char input;
	int temp=0;
	textcolor(10);
	cprintf("Bubble Sort:-");
	textcolor(19);
	cout<<endl;
	cout<<endl<<"----Processing Request----";
	for(int j=0;j<10;j++){
		for(int i=0;i<9;i++){
		if(a[i]>a[i+1]){
			temp=a[i+1];
			a[i+1]=a[i];
			a[i]=temp;}
			}}
	delay(1000);
	cout<<endl<<endl<<"Done!, Returning to previous menu";
	delay(1500);
	}
//---------------------------------------------------------------------//
void sort(int a[10]){
	sortmenu:
	clrscr();
	char input;
	textcolor(10);
	cprintf("Sorting menu:-");
	textcolor(19);
	cout<<endl;
	cout<<endl<<"[1] Using Bubble Sort";
	cout<<endl<<"[2] Using selection Sort";
	cout<<endl<<"[3] Using Insertion Sort";
	cout<<endl<<"[x] To return to main menu";
	cout<<endl<<endl<<"Menu select: ";
	cin>>input;
	if(input=='1'){
		bubble(a);
		goto sortmenu;
		}
	if(input=='2'){
		sel(a);
		goto sortmenu;
		}
	if(input=='3'){
		inser(a);
		goto sortmenu;
		}
	cout<<endl<<endl<<"Okay... Returning to main menu";
	delay(2000);
	}
//---------------------------------------------------------------------//
void servalue(int a[10]){
	clrscr();
	textcolor(10);
	cprintf("Search by value:-");
	textcolor(19);
	cout<<endl;
	int in,matches=0;
	char exit;
	cout<<endl<<"Enter data value: ";
	cin>>in;
	cout<<endl<<"----Processing request----"<<endl;
	for(int i=0;i<10;i++){
		if(in==a[i]){
			cout<<endl<<"Match Found: a["<<i<<"]";
			matches++;
			}}
		if(matches==0){
			cout<<endl<<endl<<"Sorry No matches found";
			}
	cout<<endl<<endl<<"Enter any key to return to menu: ";
	cin>>exit;
	}
//---------------------------------------------------------------------//
void serpos(int a[10]){
	clrscr();
	textcolor(10);
	cprintf("Search by position:-");
	textcolor(19);
	cout<<endl;
	int in;
	char exit;
	cout<<endl<<"Enter array position value: ";
	cin>>in;
	cout<<endl<<"----Processing request----"<<endl;
	delay(1000);
	if(in<10){
	cout<<"The data-value at a["<<in<<"] is = "<<a[in];}
	else{
	cout<<endl<<"Input value is out of range";
	}
	cout<<endl<<endl<<"Enter any key to return to main menu: ";
	cin>>exit;
	}
//----------------------------------------------------------------------//
void reset(int a[10]){
	clrscr();
	textcolor(10);
	cprintf("Reset Values:-");
	textcolor(19);
	cout<<endl;
	cout<<endl<<"Do you wish to contiue? [Y/N]: ";
	char in;
	//int exit;
	cin>>in;
		if(in=='Y'){
		cout<<endl<<endl<<"----Processing Request----";
		for(int i=0;i<10;i++){
		a[i]=0;}
		delay(1000);
		cout<<endl<<"Done!";
		}
	cout<<endl<<"Okay... Returning to the main menu.";
	delay(2000);
	}


//------------------------------------------------------------------//
void print(int a[10]){
	clrscr();
	textcolor(10);
	cprintf("Array data values:-");
	textcolor(19);
	cout<<endl;
	for(int i=0;i<10;i++){
		cout<<endl<<"The value of a["<<i<<"] = "<<a[i];
		}
	char j;
	textcolor(10);
	cout<<endl<<endl;
	cprintf("Press any key and enter to return to the menu:");
	cin>>j;
	textcolor(19);
	}

void modify(int a[10]){
	clrscr();
	textcolor(10);
	cprintf("Modify data-item:-");
	textcolor(19);
	cout<<endl;
	int i=0;
	char j;
	reselect:
	cout<<endl<<"Enter element number[0 to 9]: ";
	cin>>i;
	cout<<endl<<endl<<"The selected item a["<<i<<"] = "<<a[i]<<endl;
	cout<<"Do you wish to change selection [Y/N]: ";
	cin>>j;
	if(j=='N'){
		cout<<endl<<"--Selection confirmed--";
		delay(1000);
		}else{
		cout<<endl<<"Okay...Try reselecting"<<endl;
		goto reselect;
		}
	int temp=0;
	cout<<endl<<"Enter new value: ";
	cin>>temp;
	a[i]=temp;
	cout<<endl<<"Done !, returning to menu...";
	delay(2000);
	}

//--------------------------------------------------------------------//
void exit(){
	clrscr();
	cout<<"Then this is goodbye...";
	delay(500);
	}
//---------------------------------------------------------------------//
void menudriver(int a[10])
	{
	menu:
	clrscr();
	textcolor(10);
	cprintf("Main Menu:-");
	textcolor(19);
	cout<<endl;
	char i=0;
	cout<<endl<<"[1] Modify dataitem in an array";
	cout<<endl<<"[2] Print data values";
	cout<<endl<<"[3] Reset all values to 0";
	cout<<endl<<"[4] Search by position";
	cout<<endl<<"[5] Search by value";
	cout<<endl<<"[6] Sorting to ascending order";
	cout<<endl<<"[x] Exit from Application";
	retry:
	cout<<endl<<endl<<"Menu selct: ";
	cin>>i;
	if(i=='1'){
		modify(a);
		goto menu;
		}
	if(i=='2'){
		print(a);
		goto menu;
		}
	if(i=='3'){
		reset(a);
		goto menu;
		}
	if(i=='4'){
		serpos(a);
		goto menu;
		}
	if(i=='5'){
		servalue(a);
		goto menu;
		}
	if(i=='6'){
		sort(a);
		goto menu;
		}
	if(i=='x'){
		exit();
		}
		else{
		cout<<endl<<"Invalid entry: Try again or [x] to exit"<<endl;
		goto retry;
		}
	}
//---------------------------------------------------------------------//
void input()
	{
	cout<<"Enter Values for the array:"<<endl<<endl;
	int a[10];
	a[10]=0;
	for(int i=0;i<10;i++)
		{
		cout<<"Enter value for a["<<i<<"] : ";
		cin>>a[i];
		cout<<endl;
		}
	cout<<endl<<"Initializing";
	delay(500);
	cout<<".";
	delay(400);
	cout<<".";
	delay(300);
	cout<<".";
	cout<<endl<<"Press any key to continue";
	menudriver(a);
	}
//-------------------------------------------------------------------//
void main()
	{
	clrscr();
	textcolor(10);
	cprintf("Author: Dhruv");
	textcolor(19);
	cout<<endl<<endl;
	input();
	}
