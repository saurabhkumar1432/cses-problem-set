#include <bits/stdc++.h>
using namespace std;
int main(){
long long n,ans=0;
cin>>n;
long long prev,curr;
cin>>prev;
for(int i=1;i<n;i++)
{
    cin>>curr;
    if(curr<prev)
    {
    ans+=prev-curr;
    curr=prev;
    }

    prev=curr;
    
}
cout<<ans;
    return 0;
}