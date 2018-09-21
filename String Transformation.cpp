#include <bits/stdc++.h>
using namespace std;
int main()
{
	char s[100011];
	cin>>s;
	char t = 'a';
	for (int i=0; s[i]; ++i) {
		if (t > 'z') 
		    break;
		if (s[i] <= t) 
		    s[i] = t++;
	}
	if(t>'z')
	    cout<<s;
	else
	    cout<<-1;
	return 0;
}