#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int len,cnt=0;
    cin>>s;
    len=s.size();
    for(int i=0;i<len/2;i++)
    {
        if(s[i]!=s[len-i-1])
            cnt++;
    }
    if(cnt==1||(cnt<=1&&(len%2!=0)))
        cout<<"YES";
    else
       cout<<"NO";
    return 0;
}