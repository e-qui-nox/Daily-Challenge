#include<bits/stdc++.h>

using namespace std;

int main(){
    
	int n,c=0;
    
	cin>>n;
    
	char a[n];
    
	for(int i=0;i<n;i++){
        
		cin>>a[i];
    
	}
    
	sort(a,a+n);
    
	if(n<=26){
        
		for(int i=0;i<n-1;i++){
            
			if(a[i]==a[i+1])
                
				c++;
        
		}
         
		cout<<c<<endl;
    
	}
   
	 else
        
		cout<<-1<<endl;

}