#include<iostream>
using namespace std;
void sort(int a[][10], int n=3)
{	int k;
	int temp;
        for(k=0;k<n;k++)
{
	for(int i=0;i<n;i++)
		for(int j=0;j<n-i-1;j++)
			if(a[k][j]>a[k][j+1])
			{
				temp=a[k][j];
				a[k][j]=a[k][j+1];
				a[k][j+1]=temp;
			}
}}
int main()
{
  int a[10][10],i,j,n=3;
char c;
  cout<<"Do you want to enter the size(y/n):";
	cin>>c;
	switch(c)
	{
		case 'y':	cout<<"Enter the size:";
				cin>>n;
				
				break;
		default : n=3 ;       
 }
  cout<<"\nEnter the Elements :";
  for(i=0;i<n;i++)
  for(j=0;j<n;j++)
  {
    cin>>a[i][j];
  }
  cout<<"The matrix is :";
  cout<<"\n";
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {  
       cout<<a[i][j]<<"  ";
    }
    cout<<"\n";
    cout<<"\n";
  }
  
     sort(a,n);

  cout<<"The Row-wise sorted matrix is :";
  cout<<"\n";
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {  
       cout<<a[i][j]<<"  ";
    }
    cout<<"\n";
    cout<<"\n";
  }

  // return 0;
}
