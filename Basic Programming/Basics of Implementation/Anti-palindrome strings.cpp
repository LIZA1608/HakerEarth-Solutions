/*https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/anti-plaindrome-2-72ff6f62/ */

#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
string str1,str2;
cin>>str1;
str2=str1;
reverse(str2.begin(), str2.end());
if(str1==str2)
{
	cout<<"-1"<<endl;
}
else
{
sort(str1.begin(),str1.end());
cout<<str1<<endl;
}
}
return 0;
}
