#include<iostream>
#include<string.h>
using namespace std;
class student
{
	public:
		string name;
		int rno;
		
		void get()
		{	
			cout<<"Enter YOur Name :";
			cin>>name;
			cout<<"\nEnter Your RollNo :";
			cin>>rno;
		}
};

class subject:public virtual student
{
	public:
		int m1,m2,m3;
		
		void sget()
		{       	
			cout<<"\nEnter the Marks out of 100";
			cout<<"\nEnter Mark 1 :";
			cin>>m1;
			cout<<"\nEnter Mark 2 :";
			cin>>m2;
			cout<<"\nEnter Mark 3 :";
			cin>>m3;
		}
};

class language:public virtual student
{
	public:
		int l1,l2;
		void lget()
		{
			cout<<"\nEnter the Marks out of 100";
			cout<<"\nEnter the Mark of laguage 1 :";
			cin>>l1;
			cout<<"\nEnter the Mark of laguage 1 :";
			cin>>l2;
		}
};

class result:public subject,public language
{	
	public:
		int sum;
		int p;
		
		void display()
		{	
			sum=m1+m2+m3+l1+l2;
			p=sum/500*100;
			cout<<"\nName :"<<name;
			cout<<"\nRollNo :"<<rno;
			cout<<"\nMark 1 :"<<m1;
			cout<<"\nMark 2 :"<<m2;
			cout<<"\nMark 3 :"<<m3;
			cout<<"\nLanguage 1 :"<<l1;
			cout<<"\nLanguage 2 :"<<l2;
			cout<<"\nTotal Mark :"<<sum;
			//cout<<"\nPercentage :"<<p<<"%"; 
		}
};

main()
{
	result r;
	r.get();
	r.sget();
	r.lget();
	r.display();
}
