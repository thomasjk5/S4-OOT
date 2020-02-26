#include<iostream>
#include<cmath>
using namespace std;
class figure
{
	int r,l,b,s1,s2,s3;
	public:
		figure(int r)
		{
			float a;
			a=3.14*r*r;
			cout<<"Area of Circle="<<a;
			
		}
		figure(int l,int b)
		{
			float ar=l*b;
			cout<<"Area of Reactangle="<<ar;
		    
			
		}
		figure(int s1,int s2,int s3)
		{
			int s=(s1+s2+s3)/2;
			float at;
			at=sqrt(s*(s-s1)*(s-s2)*(s-s3));
			cout<<"Area of Triangle="<<at;
		}
		
};

int main()
{
	
	int c,r,l,b,s1,s2,s3;
        while(1)
	{	
		cout<<"\n\n**** MENU ****\n1.Circle\n2.Rectangle\n3.Triangle\n4.Exit\nEnter Your Choice :";
		cin>>c;
		if(c==1)
		{
			cout<<"Enter the Radius :";
			cin>>r;
			figure c(r);
		}
		else if(c==2)
		{
			cout<<"\nEnter the Length And Breadth :";
			cin>>l>>b;
			figure re(l,b);
		}
		else if(c==3)
		{
			cout<<"\nEnter the 3 Sides :";
			cin>>s1>>s2>>s3;
			figure t(s1,s2,s3);
		}
		else 
			break; 
	}
}
