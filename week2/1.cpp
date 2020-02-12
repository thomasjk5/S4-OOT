#include<iostream>
using namespace std;
class bank
{
	char name[20];
	int acno;
	char type[20];
	int bal;
	public:
		void initial()
		{
			cout<<"Enter the Name :";
			cin>>name;
			
			cout<<"\nEnter Account Number :";
			cin>>acno;
			cout<<"\nEnter Account Type :";
			
			cin>>type;
			bal=500;
		}
		void deposit()
		{
			int amt;
			cout<<"\nWelcome "<<name;
			cout<<"\nEnter the Amount to be Deposited :";
			cin>>amt;
			bal=bal+amt;
		}
		
	        void withdraw()
	        {
	        	int amt;
	        	cout<<"Welcome "<<name;
	        	cout<<"\nEnter the Amount to be Withdrawn :";
	        	cin>>amt;
	        	if((bal-amt)<500)
	        		cout<<"\nInsufficient Balance Withdrawal Not Possible";
	        	else
	        		{
					bal=bal-amt;
				 	cout<<"\n Please Collect Your Money $";
				}

	        	cout<<"\nBalance="<<bal;
			cout<<"\n";
	        }
	        void display()
	        {
	        	cout<<"\n"<<name;
	        	cout<<"\n"<<acno;
	        	cout<<"\n"<<type;
	        	cout<<"\nBalance="<<bal;
			cout<<"\n";
	        }
};
main()
{
	class bank b;
	int c;
	b.initial();
        while(1)
        { 
         	cout<<"\n$$$$$ MENU $$$$$ \n1.Deposit\n2.Withdraw\n3.Display\n4.Exit";
         	cout<<"\n Enter Your Choice :";
         	cin>>c;
         	if(c==1)
			b.deposit();
	 	else if(c==2)
			b.withdraw();
		else if(c==3)
	       		b.display();
	        else 
	        	break;
        }
}
	     
	        	
	        	
