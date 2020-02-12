#include<iostream>
using namespace std;
class vote
{
public:
    int cvotes;
    static int tvotes;
    vote()
    {
        cvotes=0;
    }
    void voting();
};
int vote::tvotes=0;
void vote::voting()
{
    cvotes++;
    tvotes++;
}
int main()
{
    vote v[5];
    int ch;
    int disvote=0;
    char s;
   
   

    s='y';
    do{  cout<<"\n***** CANDIDATE LIST *****\n";
         for(int i=0;i<5;i++)
         cout<<"Candidate "<<i+1<<"\n";
         cout<<"\nEnter the Candidate ID (1-5): ";
         cin>>ch;
   
       
         if(ch>=1&&ch<=5)
            v[ch-1].voting();
	 else
		disvote++;
        cout<<"Do you want to continue(y/n):";
        cin>>s;
    }while(s!='n');
    cout<<"$$$ VOTING RESULT $$$\n";
    for(int i=0;i<5;i++)
        cout<<"Candidate "<<i+1<<" : "<<v[i].cvotes<<endl;
  cout<<"Total votes:"<<vote::tvotes<<endl;
 cout<<"Discarded votes:"<<disvote<<endl;
}
