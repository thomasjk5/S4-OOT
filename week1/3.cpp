#include<iostream>
using namespace std;
void swap_value(int,int);
void swap_add(int*,int*);
void swap_ref(int &,int &);

int main()
{
	int x,y,s;
	cout<<"Enter A : ";
	cin>>x;
	cout<<"Enter B : ";
	cin>>y;
        cout<<"\n";
	while(1)
	{
		cout<<"\n1.Swap by Value\n2.Swap by Address\n3.Swap by Reference\n4.Exit";
		cout<<"\nEnter the choice : ";
		cin>>s;
		if(s==1)
			swap_value(x,y);
		else if(s==2)
			swap_add(&x,&y);
		else if(s==3)
			swap_ref(x,y);
		else if(s==4)
			break;
	}
	return 0;
}
	void swap_add(int *x,int *y)
	{
		int temp;
             
		temp=*x;
		*x=*y;
		*y=temp;
		cout<<"\nAfter swapping\nValue of A is"<<*x<<"\nValue of B is"<<*y;
	}
	void swap_ref(int &a,int &b)
{
	int c;
	c=a;
	a=b;
	b=c;
	cout<<"\nAfter swapping\nValue of A is"<<a<<"\nValue of B is"<<b;
}
	
	void swap_value(int a,int b)
{
	int c;
	c=a;
	a=b;
	b=c;
	cout<<"\nAfter swapping\nValue of A is "<<a<<"\nValue of B is "<<b;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
