#include<bits/stdc++.h>
using namespace std;
int main(){
    int m;
    for(int i=1;i<=5;++i){
        for(int j=1;j<=5;++j){
            cin>>m; 
            if(m==1)cout<<(abs(3-i)+abs(3-j));
        }
    }
}