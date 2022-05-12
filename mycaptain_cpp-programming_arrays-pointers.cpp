#include<iostream>
using namespace std;
int main()
{
	int arr[1000]; 
	int j,n;
	cout<<"How many elements are you going to enter? "<<endl; 
	cin>>n; 
	cout<<"Enter the array elements now: "<<endl; 
	for(j=0; j<n;j++)
	{
		cout<<"Enter element: "<<j+1<<endl; 
		cin>>arr[j]; 
	}
	int *p; 
	p = arr; 
	int i; 
	for(i=0; i<n; i++)
	{
		cout<<*p<<" "; 
		p++;
	}
}
