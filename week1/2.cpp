#include<iostream>
#include<math.h>
using namespace std;
float calc(float p,float r,float n,float t)
{
	float a,b,c,d;
	a=1+(r/n);
        b=n*t;
        c=pow(a,b);
        d=p*c;
	return d;
}
int main()
{
	float s,p,r,n,t;
	cout<<"Enter the Principle Amount : ";
	cin>>p;
	cout<<"\nEnter the Rate : ";
	cin>>r;
	cout<<"\nEnter the of Number of Times Interest have to be Paid : ";
	cin>>n;
	cout<<"\nEnter the Time Period : ";
	cin>>t;
	s=calc(p,r,n,t);
	cout<<"\nThe Interest is : "<<s;
	return 0;
}
