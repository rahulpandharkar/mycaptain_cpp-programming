#include<iostream>
using namespace std; 
string first_name [50], last_name[50], course[50], division[50],name_delete;
int choice,no_of_records,i,j,flag=0,main_flag = 0,flag_1=0,flag_2=0,flag_3=0,flag_4=0,choice_1;
int add_record()
{
	system("cls");
	cout<<"Enter the number of records you want to add"<<endl;
		cin>>no_of_records; 
	
			while(flag_3==0 && flag_4==0)
			{
					for(i=0; i<no_of_records;i++)
	{
			cout<<"Enter First Name of Student "<<i+1<<":"<<endl; 
			cin>>first_name[i]; 
			cout<<"Enter Last Name of Student "<<i+1<<":"<<endl; 
			cin>>last_name[i]; 
			cout<<"Enter Course of "<<first_name[i]<<" among:\n1. COMPUTER\n2. IT\n3. AI-DS\n4. EXTC\t";
			cin>>choice_1;
		    if(choice_1 == 1)
			{
			course[i] = "COMPUTER";
			flag_3 = 1;
		    }
			else if(choice_1 == 2)
			{
			course[i] == "IT";
			flag_3 = 1;
			}
			else if(choice_1 == 3)
			{
			course[i] = "AI-DS";
			flag_3 = 1;
			}
			else if(choice_1 == 4)
			{
			course[i] == "EXTC";
			flag_3 = 1;
			}
			else
			cout<<"Invalid input, enter again....\n"<<endl;
		    cout<<"Enter Division of "<<first_name[i]<<" among: \nA\nB\nC\nD\t";
			cin>>division[i];
		    if(division[i]== "A" || division[i] == "a" || division[i] == "b" || division[i] == "b" || division[i] == "c" || division[i] == "c" || division[i] == "D" || division[i] == "d")
			flag_4=1; 
			else
			cout<<"Invalid input, enter again....\n"<<endl;
		
		    }
		
		}
		return 0; 
	}
	

int view_record()
{
	system("cls");
		for(i=0;i<no_of_records;i++)
		{
			cout<<"Student: "<<i+1<<"\n"<<"Name: "<<first_name[i]<<" "<<last_name[i]<<"\nCourse: "<<course[i]<<"\nDivision: "<<division[i]<<"\n\n";
		}
		return 0; 
}
int delete_record()
{
	system("cls");
	while(flag == 0)
		{
		cout<<"Enter the first name of the Student whose data you want to delete"<<endl; 
		cin>>name_delete; 
		for(i=0; i<no_of_records; i++)
		{
			if(name_delete == first_name[i])
			{
				for(j=i;j<no_of_records-1;j++)
			first_name[j] = first_name[j+1]; 
			last_name[j] = last_name[j+1];
			course[j] = course[j+1];
			division[j] = division[j+1];
			i--;
			no_of_records--;
		}
	    }
			flag = 1;
			flag_2=1;
			system("cls");
			cout<<"Deleted Sucessfully";
		    }
	    
	    if(flag_2 == 0)
	    cout<<"\n\nName not found, try again..."<<endl;
		return 0;
}

int main()
{
	system("cls");
    cout<<"\n\n\t\t\tWelcome to Student DataBase Management System\n\n\t\t\t*********************************************"<<endl; 
    do
	{
	cout<<"\n\nChoose: \n\n1. Add a Record\n2. View Records\n3. Delete Record\n4. Exit\n\nEnter Choice: "; 
	cin>>choice;

		if(choice==1)
		add_record();
		else if(choice==2)
		view_record();
		else if(choice==3)
		delete_record();
		else if(choice==4)
		main_flag = 1;
		else 
		cout<<"Enter valid input"<<endl;
    } 
    while(main_flag==0);
}
