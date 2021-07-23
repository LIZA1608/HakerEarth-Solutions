/*https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/mathematically-beautiful-numbers-174a158e/ */

#include <iostream>
using namespace std;
int main() {
int t;
cin>>t;
while(t--)
{
long long n,k;
cin>>n>>k;
long long y=n;
int flag=0;
while(y%k==1||y%k==0)
{
y=y/k;
if(y==0)
{
cout<<"YES"<<'\n';
flag=1;
break;
}
}
if(flag==0)
{
cout<<"NO"<<'\n';
}
}
return 0;
}
