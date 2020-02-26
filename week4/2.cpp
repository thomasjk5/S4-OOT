#include<iostream>
#include<string.h>
using namespace std;
class person
{
	public:
		int age;
		string	name,gender;
		void getdata()
		{
			cout<<"Enter the Name :";
			cin>>name;
			cout<<"\nEnter the Age :";
			cin>>age;
			cout<<"\nEnter Gender :";
			cin>>gender;
		}
};

class employee:public person
{
	public:
		int salary;
		string company;
		
		void egetdata()
		{
			cout<<"\nEnter Your Company Name :";
			cin>>company;
			cout<<"\nEnter Your Salary :";
			cin>>salary;
		}
};
class programmer:public employee
{
	public:
		string lang;
		
		void pget()
		{
			cout<<"\nEnter the Languages Known :";
			cin>>lang;
		}
		
		void display()
		{
			cout<<"\nName :"<<name;
			cout<<"\nAge :"<<age;
			cout<<"\nGender :"<<gender;
			cout<<"\nCompany :"<<company;
			cout<<"\nSalary :"<<salary;
			cout<<"\nLanguages Known :"<<lang;
			cout<<"\n";
		}
};

main()
{
	programmer p;
	p.getdata();
	p.egetdata();
	p.pget();
	p.display();
}

