#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,t;
    cin>>n;
    long long a[n-1]={0};
    for(int i=0;i<n-1;i++)
    {
cin>>t;
a[t-1]=1;
    }
     for(int i=0;i<n;i++)
     {
        if(a[i]!=1)
        {cout<<i+1;
        break;}
     

     }
     return 0;


}