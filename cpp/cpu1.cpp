#include <iostream>

using namespace std;
class cpu
{
    public:
    string pname;
    int bt,at,tat,wt,atat,awt,tt;

      void input()
      {
          cout<<"\nenter proces name ";
          cin>>pname;
          cout<<"enter burst time";
          cin>>bt;
          cout<<"enter arrival time";
          cin>>at;
         
      }
      void out()
      {
          cout<<"\n"<<pname<<"  "<<bt<<"  "<<at;
      }
      
};
cpu c[5];
void arrange()
{
    cpu temp;
     for(int i=0;i<5;i++)
    {
       temp=c[i];
       for(int j=i;j<5;j++)
       {
        if(c[j].at<temp.at)
        {
            temp=c[i];
            c[i]=c[j];
            c[j]=temp;       
        }
       }
    }
}
void calc()
{   
    int stat=0,swt=0;
    float atat,awt;
    c[-1].tt=0;
    for(int i=0;i<5;i++)
    {
        c[i].tt=c[i-1].tt+c[i].bt;
        c[i].tat=c[i].tt-c[i].at;
        stat=stat+c[i].tat;
        c[i].wt=c[i].tat-c[i].bt;
        swt=swt+c[i].wt;
    }
    atat=stat/5.0;
    cout<<"\natat="<<atat;
    awt=swt/5;
    cout<<"\nawt="<<awt;
}
void output()
{
    cout<<"\nPN  BT  AT";
    for(int i=0;i<5;i++)
    {
        c[i].out();
    }
}

int main()
{
    
    
    for(int i=0;i<5;i++)
    {
        c[i].input();
    }
    output();
    arrange();
    output();
    calc();
    
    return 0;
}