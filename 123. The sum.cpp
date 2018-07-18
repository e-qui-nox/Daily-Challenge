#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k,t1 = 1,t2 = 1,nextTerm = 0,sum = 0;
    cin >> k;
    for (int i = 1; i <= k; ++i)
    {
        if(i == 1)
        {
            sum+=t1;
            continue;
        }
        if(i == 2)
        {
            sum+=t2;
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        sum += nextTerm;
    }
    cout<<sum<<endl;
    return 0;
}