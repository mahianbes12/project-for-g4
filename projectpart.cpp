#include<iostream>
#include<string.h>
#include <iomanip>
#include <ctime>
using namespace std;

char type;				//COMFORT SUITE OR NORMAL ROOM
char stype;				//BIG SIZE OR SMALL SIZED ROOM
char ac;				//AC OR NON AC
int roomNumber;			//ROOM NUMBER
double rent;
int status;
	
void acceptroom(int rno);		//ACCEPTING ALL ROOM DETAILS

int main(){
     
	status=0;
	cout<<"Type AC/Non-AC (A/N) : ";
	cin>>ac;
	while(ac!='A'&& ac!='N')		//VALIDATIONS
	{
		cout<<"Please Re-Enter Type: AC/Non-AC (A/N) : ";
		cin>>ac;
	}
	cout<<"Type Comfort Suite or Normal (S/N) : ";
	cin>>type;
	while(type!='S' && type!='N')
	{
		cout<<"Please Re-enter Type Comfort Suite or Normal (S/N) : ";
		cin>>type;
	}
	cout<<"Type Size (B/S) : ";
	cin>>stype;
	while(stype!='B'&& stype!='S')
	{
		cout<<"Please Re-enter Type Size (B/S) : ";
		cin>>stype;
	}
	cout<<"Daily Rent : ";
	cin>>rent;
	while(rent<0 || rent>20000)
	{
		cout<<"Please enter valid rent.";
		cin>>rent;
	}
		//BOOKING STATUS OF THE ROOM
	void acceptroom(int rno);
	cout<<"\nRoom Added Successfully!"<<endl;
	
	
	return 0;
}
