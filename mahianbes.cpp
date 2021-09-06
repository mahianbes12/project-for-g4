#include<iostream>
#include<string.h>
#include <iomanip>
struct room{
    char type;				//COMFORT SUITE OR NORMAL ROOM
	char stype;				//BIG SIZE OR SMALL SIZED ROOM
	char ac;				//AC OR NON AC
	int roomNumber;			//ROOM NUMBER
	double rent;			//DAILY RENT OF ROOM
	int status=0;			//ROOM IS BOOKED OR NOT
}r[100];
struct Customer
{
	char name;	   			 //CUSTOMER FULL NAME
	string address;				//CUSTOMER ADDRESS
	int phone;				//CONTACT NUMBER
	int days=0;	    			//DURATION OF STAY
	float payment_advance;		//ADVANCE PAYMENT
	double bill=0;				//BILL AMT
	int booking_id;				//BOOKING ID
	int room;					//ROOM NO
	int status;
}c[100];
struct Hotel
{
	room r[100];			//ARRAY OF ROOMS
	Customer c[100];
				//ARRAY OF CUSTOMERS
	int nroom=0, ncust=0;	//NO OF ROOMS AND CUSTOMERS
}h;
void displayRoom();
void availablity()
{
	
    if(h.nroom==0)
	{
		cout<<"Please add rooms."<<endl;
		return;
	}
	cout<<"The list of all available rooms:"<<endl;
	cout<<"| Room No.\t|\tAC/Non-AC\t|\tType\t\t|\tStype\t\t|\tRent\t\t|\tAvailability  \t|"<<endl;
	for(int i=0;i<h.nroom;i++)
	{
			cout<<"| "<<r[h.ncust].roomNumber<<".\t\t|\t"<<r[h.ncust].ac<<"\t\t|\t"<<r[h.ncust].type<<"\t\t|\t"<<r[h.ncust].stype<<"\t\t|\t"<<r[h.ncust].rent<<"\t\t|\t";
	if(r[h.ncust].status==0){cout<<"Available.\t|";}
	else{cout<<"Booked.\t\t|";}
	cout<<endl;	//DISPLAYING ROOM DETAILS
	}
}
void searchRoom()	//SEARCH FOR A PARTICULAR TYPE OF A ROOM
{
	if(h.nroom==0)
	{
		cout<<"Please add rooms."<<endl;
		return;
	}
	int flag=0;
	char ac1, type1, stype1;
	cout<<"Do you want AC or Non-AC? (A/N): "<<endl;
	cin>>ac1;
	cout<<"Do you want suite or normal room?"<<endl;
	cin>>type1;
	cout<<"Size? (B/S)"<<endl;
	cin>>stype1;
	for(int i=0;i<h.nroom;i++)
	{
		if(r[i].ac==ac1 && r[i].type==type1 && r[i].stype==stype1)		//MAKING SURE ALL CONDITIONS ARE SATISFIED
		{
			flag=1;
			cout<<"Room found"<<endl;
			displayRoom();
		}
	}
	if(flag==0)
	{
		cout<<"No such room is available."<<endl;
	}
}
void searchCust()
{
    int id, flag=0;
	cout<<"Enter booking id of customer.";
	cin>>id;
	for(int i=0;i<=h.ncust;i++)		//SEARCHING FOR CUSTOMER
	{
		if(c[i].booking_id==id)
		{
			cout<<"\t\t\t Name"<<setw(20);
			cout<<"\t\t\t Phone"<<setw(20);
			cout<<"\t\t\t Address"<<setw(20);
			cout<<"\t\t\tRoom no: "<<setw(20)<<endl;
			displayCust();
			flag=1;
		}
	}
	if(flag==0)		//case not found
	{
		cout<<"No customer found."<<endl;
	}
}

void displayRoom()
{
	cout<<"| "<<r[h.ncust].roomNumber<<".\t\t|\t"<<r[h.ncust].ac<<"\t\t|\t"<<r[h.ncust].type<<"\t\t|\t"<<r[h.ncust].stype<<"\t\t|\t"<<r[h.ncust].rent<<"\t\t|\t";
	if(r[h.ncust].status==0){cout<<"Available.\t|";}
	else{cout<<"Booked.\t\t|";}
	cout<<endl;
}
void displayCust()		//DISPLAYING CUSTOMER DETAILS
{
	cout<<c[h.ncust].booking_id<<"\t\t";
	cout<<"| "<<left<<setfill(' ')<<setw(30)<<c[h.ncust].name;
	cout<<"| "<<c[h.ncust].phone<<"\t\t\t";
	cout<<"| "<<left<<setfill(' ')<<setw(30)<<c[h.ncust].address;
	cout<<"| "<<c[h.ncust].room<<"\t\t\t";
	if(c[h.ncust].status==1){cout<<"|\t\t-\t\t|"<<endl;}
	else{cout<<"|\tCHECKED OUT.\t\t|"<<endl;}
}

void acceptCust()		//ACCEPTING CUSTOMER DETAILS
{
	cout<<"Enter customer name: ";
	getline(cin, c[h.ncust].name);
	cout<<"Enter Customer address: ";
	getline(cin,c[h.ncust].address);
	flag:
	cout<<"Enter mobile number: ";
	cin>>c[h.ncust].phone;
	for(int i=0;i<(c[h.ncust].phone.length());i++)	//PHONE NUMBER VALIDATIONS
  	{									//PHONE NUMBER NEEDS TO BE ALL DIGITS AND 10 IN LENGTH
		if(!isdigit(c[h.ncust].phone[i]))
		{
			cout<<"Phone number has to be in digits.\n";
			goto flag;
		}
  	}
  	if(c[h.ncust].phone.length()!=10)		//PHONE LENGTH VALIDATIONS
  	{
  	  cout<<"Phone number should be 10 digits.\n";
  	  goto flag;
 	 }
}
