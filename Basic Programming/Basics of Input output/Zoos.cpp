*/ https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/is-zoo-f6f309e7*/

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char a[20];
    cin>>a;
    int x=0;
    int y=0;
    int z;
    z=strlen(a);
    for(int i=0;i<z;i++)
    {
        if(a[i]=='z'||a[i]=='Z')
            x++;
        else
            y++;
    }
    if(2*x==y)
    cout<<"Yes";
    else
    cout<<"No";
    return 0;
}
