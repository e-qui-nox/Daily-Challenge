#include <bits/stdc++.h>
#define ll long long
using namespace std ;
ll a,b,c;
int main ()
{
    cin>>a>>b;
    if(b-a>=10){
        cout<<0;
        return 0;
    }
    c=1;
    for(ll i=b;i>a;i--)
    {
	    c*=i;
	    c%=10;
    }
    cout<<c;
    return 0;
}