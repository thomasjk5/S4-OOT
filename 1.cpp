#include<iostream>
#include<string.h>
using namespace std;
class account
{       
	public:
	string name,type;
	int acno;
	
		void getdata()
		{
			cout<<"Enter the Name :";
			cin>>name;
			cout<<"\nEnter the Account Number :";
			cin>>acno;
			cout<<"\nEnter the Account Type :";
			cin>>type;
		}
};
class cur_acct:public account
{
	float bal;
	public:
		void cdeposit()
		{
			int amt;
			cout<<"Enter the Amount to be Deposited :";
			cin>>amt;
			bal=bal+amt;
		}
		
		void cwithdraw()
		{
			float m;
			cout<<"Enter the Amount to be Withdrawn ;";
			cin>>m;
			while(1)
			{
				if((bal-m)<0)
				{
					cout<<"Enter An Amount greater than or equal to"<<bal;
					cout<<"\nEnter the Amount to be Withdrawn :";
					cin>>m;
				}
				else
				{
					bal=bal-m;
					cout<<"\nBalance="<<bal;
					break;
				}
			}
		}	
		
		
	         void cdisplay()
	         {
	         	cout<<"Name :"<<name;
	         	cout<<"\nAccount Number :"<<acno;
	         	cout<<"\nType :"<<type;
	         	cout<<"\nBalance :"<<bal;
	         }
};

class sav_acct:public account
{
	float b;
	public:
		sav_acct()
		{
			b=1000;
		}
		void sdeposit()
		{
			int amt;
			cout<<"Enter the Amount to be Deposited :";
			cin>>amt;
			b=b+amt;
		}
		
		void swithdraw()
	        {
	        	int amt;
	        	cout<<"Welcome "<<name;
	        	cout<<"\nEnter the Amount to be Withdrawn :";
	        	cin>>amt;
	        	if((b-amt)<1000)
	        		cout<<"\nInsufficient Balance Withdrawal Not Possible";
	        	else
	        		{
					b=b-amt;
				 	cout<<"\n Please Collect Your Money $";
				}

	        	cout<<"\nBalance="<<b;
			cout<<"\n";
	        }
	        void compute()
		{
			    
			    float r;
			    float t;
			    cout << "Enter the rate: ";
			    cin >> r;
			    cout << "Enter the time(In Year): ";
			    cin >> t;
			    float si = (b*r*t)/100;
			    cout << "The Simple Interest is "  << si << endl;	
			    b=b+si;			
			    cout<<"\nBalance="<<b;
	         }
	          void sdisplay()
	         {
	         	cout<<"Name :"<<name;
	         	cout<<"\nAccount Number :"<<acno;
	         	cout<<"\nType :"<<type;
	         	cout<<"\nBalance :"<<b;
	         }
};

int main()
{
	int ch;
	cur_acct c;
	sav_acct s;
	while(1)
	{
		cout<<"**** WELCOME ****\n1.Current\n2.Savings\nEnter your choice :";
		cin>>ch;
		if(ch==1)
		{	
			c.getdata();
			int k=0;
			while(k==0)
			{
				int c1;
				cout<<"\n\n$$$$$ MENU $$$$$ \n1.Deposit\n2.Withdraw\n3.Display\n4.Exit";
         			cout<<"\n Enter Your Choice :";	
         			cin>>c1;
				if(c1==1)
					c.cdeposit();
				else if(c1==2)
					c.cwithdraw();
				else if(c1==3)
					c.cdisplay();
				else
					k=1;
			}
		}
		else if(ch==2)
		{
			s.getdata();
			int l=0;
			while(l==0)
			{
				int c2;
				cout<<"\n\n$$$$$ MENU $$$$$ \n1.Deposit\n2.Withdraw\n3.Interest\n4.Display\n5.Exit";
				cout<<"\nEnter Your Choice :";
				cin>>c2;
				if(c2==1)
					s.sdeposit();
				else if(c2==2)
					s.swithdraw();
				else if(c2==3)
					s.compute();
				else if(c2==4)
					s.sdisplay();
				else
					l=1;
			}
		}
		else
			break;
	}
}
			
					
		
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
