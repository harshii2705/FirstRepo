#include<iostream>
using namespace std;
int main()
{
    int n,i,d;
    cout<<"enter the no of rows to be printed";
    cin>>n;
    if(n%2==0)
    {
        cout<<"wrong input enter a odd number";
        cin>>n;
    }
    else
    {
         d=n/2;
        for(i=0;i<n;i++)
        {
            for(int j=d;j>0;j--)
            {
                for(int k=0;k>n-i;k++)
                {
                    
                }
            }
        }
    }
    return 0;
}