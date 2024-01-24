#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int > v;
    for(int i=0;i<10;++i){
        int a;cin>>a;
        v.push_back(a);
    }
    for(int i=0;i<10;++i){
        cout<<v[i]<<" ";
    }
    return 0;
}