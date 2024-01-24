#include<iostream>
using namespace std;
void deci_bin(int a)
{
    int s[100],temp1,temp2,n=0;
    temp1=a;
    temp2=a;
    s[0]=1;
    //cout<<a;
    while(temp1>1)
    {
        temp1=temp1/2;
        n++; 
        //cout<<temp1;
    }
    for(int i=n;i>=0;i--)
    {
        s[i]=temp2%2;
        temp2=temp2/2;    
    }
    cout<<"\nThe binary of decimal number "<<a<<" is : ";
    for(int i=0;i<=n;i++)
    {
        cout<<s[i];
    }
}

int main()
{
    int n;
    cout<<"input a number:";
    cin>>n;
    deci_bin(n);
    return 0;
}