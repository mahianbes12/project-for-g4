#include<iostream>
#include<string.h>
#include <iomanip>
#include <ctime>
using namespace std;

struct Hotel
{
	char a[100];			//ARRAY OF ROOMS
	char c[100];			//ARRAY OF CUSTOMERS
	int nroom=0;	        //NO OF ROOMS
	void addRooms();		//ADD ROOMS TO DATABASE
				
}htl;
void addRooms(int rno);
int main()
{
	int rno;
	cout<<"Enter number of rooms: ";
	cin>>htl.nroom;		//ACCEPTING NUMBER OF ROOMS
	while(htl.nroom<=0)
	{
		cout<<"Invalid. Enter valid number of rooms.";
		cin>>htl.nroom;
	}
	for(int i=0;i<htl.nroom;i++)
	{
		cout<<"ROOM "<<(i+1)<<endl;
		flag:
		cout<<endl<<"Enter room number : ";
		cin>>rno;
		if(rno<=0)		//VALIDATIONS
		{
			cout<<endl<<"This room number is invalid! Please Re-enter the room number : ";
			goto flag;
		}
		void addRooms(int rno);
		for(int i=0; i<htl.nroom;i++)	//VALIDATIONS FOR REPETITIVE ROOM NUMBERS
		{
			if(htl.a[i]==rno)
			{
				cout<<"Invalid. Repetitive room numbers."<<endl;
				goto flag;
			}
		}
		
	}
	cout<<"\nSuccesfully added to the database!"<<endl;
	return 0;
}