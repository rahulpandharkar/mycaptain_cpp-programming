#include<iostream>
using namespace std; 
int checking(int n);
int main()
{
    int n, i,flag=0; 
	cout<<"Enter a number: "<<endl;
	cin>>n;  
	cout<<n<<" can be expressed as sum of two numbers as follows: "<<endl; 
	for(i = 2; i<=n/2; i++)
	{
		if(checking(i)==1)
		{
			if(checking(n-i))
			{
				cout<<n<<" = "<<i<<" + "<<n-i<<endl;
				flag = 1;
			}
		}
	}
	if(flag ==0)
	cout<<n<<" cannot be expressed as sum of two prime numbers"<<endl; 
	return 0; 
}
int checking(int n)
{
	int i, prime_check = 1; 
	for(i=2; i<=n/2;i++)
	{
		if(n%i==0)
		{
			prime_check = 0; 
			break;
		}
		
	}
	return prime_check; 
	
}

