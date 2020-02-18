#include<iostream>
#include<string.h>
using namespace std;
void sum(int,int);
void sum(int);
void sum(string,string);
int main()
{ 
 int num1,num2,num3,c;
 while(1)
 {
 	cout<<"\n\n***** MENU *****\n1.Sum of Numbers\n2.Sum of Digits of a Number\n3.Sum of Strings\n4.Exit\nEnter Your Choice :";
 	cin>>c;
 if(c==1)
 {
  cout<<"\nEnter 2 numbers\n";
  cin>>num1>>num2;
  sum(num1,num2);
 }
 else if(c==2)
 {
 	cout<<"\nEnter a number\n";
    cin>>num3;
    sum(num3);
 }
 else if(c==3)
 {
 
 string str1,str2;
 cout<<"\nEnter string 1 :"; 
  cin>>str1;
 cout<<"\nEnter string 2 :";
 cin>>str2;
  sum(str1,str2);
 }
 else 
 break;
}
 return 0;
}
void sum(int a, int b)
{ int s=0;
  s = a+b;
  cout<<"sum="<<s;
}
void sum(int a)
{ int r, s=0;
  while(a!=0)
  { r =a%10;
    s = s+r;
    a = a/10;
  }
  cout<<"Sum of digits="<<s;
}
void sum(string str1, string str2)
{ string str3;
  str3=str1+str2;
  cout<<"Sum of strings="<<str3;
}

