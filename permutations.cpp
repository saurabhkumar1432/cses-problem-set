#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
if(n==1)
cout<<1;
else if(n==2||n==3)
cout<<"NO SOLUTION";
else if(n==4)
cout<<"3 1 4 2";
else
{   int x=n-1;
    while(n>0)
    {
        cout<<n<<" ";
        n-=2;
    }
    while(x>0)
    {
        cout<<x<<" ";
        x-=2;
    }
}
    return 0;
}