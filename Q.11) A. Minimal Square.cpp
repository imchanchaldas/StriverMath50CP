
#include <bits/stdc++.h>
using namespace std;


 
void solve() {
  
  long long int a;
  long long int b;
  long long int ans=0;
  cin>>a;
  cin>>b;
  if(a==b){
  	 ans=(a+b)*(a+b);
  	
  }
  else if(a>b){
  	if(b*2>=a) {
  		ans=b*2*b*2;
  		// cout<<ans<<endl;
  	}
  	else {
  		ans=a*a;
  		// cout<<ans<<endl;
  	}
  }
  else{
  	if(a*2>=b) 
  		ans=a*2*a*2;
  		// cout<<ans
  	else ans=b*b;
  }
  cout<<ans<<endl;

  
	 
}
 
int main() {


	#ifndef ONLINE_JUDGE
	 freopen("input.txt","r",stdin);
	 freopen("output1.txt","w",stdout);
	 #endif

	 
	 int t;
	 cin>>t;
	 while(t--){
	 	solve();
	 }

	 
	  return 0;
}






