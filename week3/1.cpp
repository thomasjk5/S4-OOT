#include<iostream>
#include<string>
using namespace std;
class bank_count
{
	int count;
	public:
		bank_count()
		{
			count=0;
		}
		void operator++(int)
		{	
			count++;
	
		}
		void operator--(int)
		{
			count--;
		}
		void display()
		{
		 	cout<<"Count= "<<count<<"\n";
		}
		
};

int main()
{
 bank_count c;
 int o;
 while(1)
 {
 	cout<<"\n**** MENU ****"<<"\n1.Increment\n2.Decrement\n3.Display\n4.Exit\nEnter your Choice :";
 	cin>>o;
 	if(o==1)
 		c++;
 	else if(o==2)
 		c--;
 	else if(o==3)
 		c.display();
 	else
 		break;
 }
}
 	  
 	 
