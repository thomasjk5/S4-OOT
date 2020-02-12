#include<iostream>
#include<string>
using namespace std;
class library
{
    int accno,rdate[3],idate[3];
    char title[30],author[25];
    float price,fine;
public:
    void getdata();
    void calculate();
    void display();
};
void library::getdata()
{
    cout<<"Enter the Account Number :";
    cin>>accno;
    cout<<"Enter the Name of the Book :";
    cin>>title;
    cout<<"Enter the Name of Author :";
    cin>>author;
    cout<<"Enter the Price:";
    cin>>price;
    cout<<"Enter the Issue date(day,month,year):";
    cin>>idate[0]>>idate[1]>>idate[2];
    cout<<"Enter the Return date(day,month,year):";
    cin>>rdate[0]>>rdate[1]>>rdate[2];
}
void library::calculate()
{
    int d=0;
      while(1)
      {
       d=(rdate[0]-idate[0])+(rdate[1]-idate[1])*30+(rdate[2]-idate[2])*365;
       cout<<"\nTotal Days= "<<d;
       if(d<0)
	{
		cout<<"\nInvalid Date\nEnter Again";
		cout<<"\nEnter the Issue date(day,month,year):";
    cin>>idate[0]>>idate[1]>>idate[2];
    cout<<"\nEnter the Return date(day,month,year):";
    cin>>rdate[0]>>rdate[1]>>rdate[2];
	d=0;
        }
       
       else if(d<=15)
        {
 		fine=0;
 		break;
        }
       else
        {
		fine=(d-15)*5;
		break;
	}
      }
}
void library::display()
{
    cout<<"\nAccount Number :"<<accno<<"\nTitle :"<<title<<"\nAuthor :"<<author<<"\nPrice :"<<price<<"\nFine :"<<fine<<"\n";
}
int main()
{
    library b,*bptr;
    bptr=&b;
    bptr->getdata();
    bptr->calculate();
    bptr->display();
}

