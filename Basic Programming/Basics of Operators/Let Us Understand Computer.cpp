#include<bits/stdc++.h>
using namespace std;
int main(){
long long int  t;
cin>>t;
while(t--){
long long int n , ans=0;
cin>>n;
int i=1;
while(i<=sqrt(n)){
i=i*2;
if(n/i>=i/2){
ans=n-n/i;
}
else{
ans=(n-(i/2))+1;
}
}
cout<<ans<<"\n";
}
}
