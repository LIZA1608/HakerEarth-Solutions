/*https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/golf/modulo-strength-4/ */

#include <iostream>
using namespace std;
int main() {
long long int n,k,i,t,j,s=0;
cin>>n>>k;
long long int a[n];
long long int b[k];
 for(long long int x=0;x<n;x++)
{
cin>>a[x];
}
for(long long int y=0;y<k;y++)
{
b[y]=0;
}
for(long long int i=0;i<n;i++)
{
t=a[i]%k;
b[t]=b[t]+1;
}
for(long long int j=0;j<k;j++)
{
s=s+b[j]*(b[j]-1);
}
cout<<s;
}

