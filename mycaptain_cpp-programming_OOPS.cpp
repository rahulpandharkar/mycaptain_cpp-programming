#include<iostream>
using namespace std;
class Class
{   
    public:
	int hrs, mins, sec, secs; 
};
int main()
{
	Class object; 
	object.hrs, object.mins, object.sec, object.secs;
	cout<<"Enter Hours: "<<endl; 
	cin>>object.hrs;
	cout<<"Enter minutes: "<<endl; 
	cin>>object.mins;
	cout<<"Enter seconds: "<<endl; 
	cin>>object.sec;
	object.secs = (object.hrs * 3600) + (object.mins * 60) + object.sec; 
	cout<<"The time is: "<<object.hrs<<":"<<object.mins<<":"<<object.sec<<endl; 
	cout<<"The total seconds are: "<<object.secs<<endl; 
}

