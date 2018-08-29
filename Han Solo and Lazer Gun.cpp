#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	double x0,y0, xi,yi,c=0;
	set<double>s;
	cin>>n>>x0>>y0;
	for(int i=0;i<n;i++){
        cin>>xi>>yi;
        if(yi!=y0)
            s.insert((double)(xi-x0)/(yi-y0));
        else
            c=1;
	}
	cout<<c+s.size();
	return 0;
}