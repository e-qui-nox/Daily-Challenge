#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char x,y,a,b;
    cin>>x>>y;
    cin>>a>>b;
    cout<<max(abs(x-a),abs(y-b))<<endl;
    while (x!=a||y!=b)
    {
        if(x<a){cout<<"R";x++;}
        if(x>a){cout<<"L";x--;}
        if(y<b){cout<<"U";y++;}
        if(y>b){cout<<"D";y--;}
        cout<<endl;
    }
}