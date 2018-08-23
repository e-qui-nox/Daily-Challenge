#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin >> t;
    while (t--){
        string x,y;
        cin >> x >> y;
        ll m = 0,n=0;
        for (ll i=0;i<x.size();i++){
            m += x[i];
        }
        for (ll i=0;i<y.size();i++){
            n += y[i];
        }
        cout << (m%3 * n%3)%3 << endl;
    }
    return 0;
}