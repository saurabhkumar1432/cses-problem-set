#include <bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
int n=s.size(),max=1,t=1;
for(int i=0;i<n;i++)
{
if(s[i]==s[i+1])
{
    t++;
}
else
t=1;
max=(t>max)?t:max;
}
cout<<max;
    return 0;
}