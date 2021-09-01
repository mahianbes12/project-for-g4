#include<iostream>
#include<string.h>
#include <iomanip>
#include <ctime>
using namespace std;
//Structure Room
struct Room
{
	char type;				//COMFORT SUITE OR NORMAL ROOM
	char stype;				//BIG SIZE OR SMALL SIZED ROOM
	char ac;				//AC OR NON AC
	int roomNumber;			//ROOM NUMBER
	double rent;			//DAILY RENT OF ROOM
	int status=0;			//ROOM IS BOOKED OR NOT
	void acceptroom(int rno);		//ADD ROOMS TO HOTEL DATABASE

}room;

void acceptroom(int rno){	//ACCEPTING ALL ROOM DETAILS
    room.roomNumber=rno;	//ROOM NUMBER
	cout<<"Type AC/Non-AC (A/N) : ";
	cin>>room.ac;
}
int main(){
	
	while(room.ac!='A'&& room.ac!='N')		//VALIDATIONS
	{
		cout<<"Please Re-Enter Type: AC/Non-AC (A/N) : ";
		cin>>room.ac;
	}
	cout<<"Type Comfort Suite or Normal (S/N) : ";
	cin>>room.type;
	while(room.type!='S' && room.type!='N')
	{
		cout<<"Please Re-enter Type Comfort Suite or Normal (S/N) : ";
		cin>>room.type;
	}
	cout<<"Type Size (B/S) : ";
	cin>>room.stype;
	while(room.stype!='B'&& room.stype!='S')
	{
		cout<<"Please Re-enter Type Size (B/S) : ";
		cin>>room.stype;
	}
	cout<<"Daily Rent : ";
	cin>>room.rent;
	while(room.rent<0 || room.rent>20000)
	{
		cout<<"Please enter valid rent.";
		cin>>room.rent;
	}
	void acceptroom(int rno);
	room.status=0;	//BOOKING STATUS OF THE ROOM
	cout<<"\nRoom Added Successfully!"<<endl;

return 0;
}

