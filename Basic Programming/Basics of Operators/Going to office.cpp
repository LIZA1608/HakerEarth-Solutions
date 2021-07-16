/*https://www.hackerearth.com/practice/basic-programming/operators/basics-of-operators/practice-problems/algorithm/going-to-office-e2ef3feb
points-10 */


#include<iostream>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	long long int t,h;
	long long int c,f,d;
	cin>>c>>f>>d;
	t=c+(n-f)*d;
	long long int a,b,s,w;
	cin>>a>>b>>s>>w;
	h=b+(n/a)*s+n*w;
	if(t>h)
	{
		cout<<"Classic Taxi";
	}
	else
	{
		cout<<"Online Taxi";
	}
}
